# Kickstart file for rhel-5.11-i686
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
key --skip

bootloader --location=mbr --append="console=tty0 console=ttyS0,115200 rd_NO_PLYMOUTH"

zerombr
clearpart --all --initlabel
part /boot --fstype=ext2   --size=512         --asprimary
part swap                --size=1024        --asprimary
part /     --fstype=ext4   --size=1024 --grow --asprimary

# Halt the system once configuration has finished.
poweroff

%packages
@core

# EOF
