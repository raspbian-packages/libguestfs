# Kickstart file for fedora-27
# Generated by libguestfs.git/builder/templates/make-template.ml

install
text
reboot
lang en_US.UTF-8
keyboard us
network --bootproto dhcp
rootpw builder
firewall --enabled --ssh
timezone --utc America/New_York
selinux --enforcing

bootloader --location=mbr --append="console=tty0 console=ttyS0,115200 rd_NO_PLYMOUTH"

zerombr
clearpart --all --initlabel --disklabel=gpt
autopart --type=plain

# Halt the system once configuration has finished.
poweroff

%packages
@core
%end

%post
# Ensure the installation is up-to-date.
dnf -y --best upgrade
# Enable Xen domU support.
pushd /etc/dracut.conf.d
echo 'add_drivers+=" xen:vbd xen:vif "' > virt-builder-xen-drivers.conf
popd
# To make dracut config changes permanent, we need to rerun dracut.
# Rerun dracut for the installed kernel (not the running kernel).
# See commit 0fa52e4e45d80874bc5ea5f112f74be1d3f3472f and
# https://www.redhat.com/archives/libguestfs/2014-June/thread.html#00045
KERNEL_VERSION="$(rpm -q kernel --qf '%{version}-%{release}.%{arch}\n' | sort -V | tail -1)"
dracut -f /boot/initramfs-$KERNEL_VERSION.img $KERNEL_VERSION
%end

# EOF
