#!/bin/sh

# Compare packagelist (minus essential packages and obsolete package
# names) with build-dependencies, in order to catch missing B-Ds
# early on new releases.

set -eu

readonly T=$(mktemp -d)
trap 'rm -rf $T' EXIT

m4 -DDEBIAN=1 -DEXTRA_PACKAGES= appliance/packagelist.in \
    | tr ' ' '\n' \
    | sed -e '/^$/d' \
          -e '/^\(bash\|coreutils\|dash\|diffutils\|findutils\|grep\|gzip\|libc-bin\|sed\|tar\|util-linux\)$/d' \
          -e '/\(btrfs-tools\|fuse-exfat\|exfat-utils\|exfat-fuse\|gfs2*-tools\|iproute\|module-init-tools\|procps-ng\)$/d' \
          -e '/^\(util-linux-ng\|sysvinit-core\|linux-image\)$/d' \
    | grep -v ^lib \
    | grep -v ufsutils \
    | sort -u \
          > $T/packagelist

< debian/control sed -n '
    /^#-# appliance start/,/^#-# appliance end/ {
        /^#/d;
        s/^[^ ].*//;H
    };
    $ {
        g;
        s/,/\n/g;
        s/\n\n* */\n/g;
        s/^\n//;
        s/\n$//;
        s/ [^\n]*//g;
        p
    }' \
        | sort -u \
               > $T/control

diff -ui $T/packagelist $T/control
