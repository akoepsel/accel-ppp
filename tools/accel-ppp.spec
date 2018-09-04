Name:		accel-ppp
Version:	1.11.0
Release:	1%{?dist}
Summary:	High performance PPTP/L2TP/PPPoE/IPoE server for Linux

Group:		Network daemons
License:        GPLv2
URL:		https://github.com/akoepsel/accel-ppp
Source0:	%{name}-%{version}.tar.gz
Epoch:		0


BuildRequires: cmake
BuildRequires: krb5-devel
BuildRequires: libcom_err-devel
BuildRequires: keyutils-libs-devel
BuildRequires: openssl-devel
BuildRequires: pcre-devel
Requires: krb5-libs
Requires: libcom_err
Requires: keyutils-libs
Requires: glibc
Requires: openssl-libs
Requires: pcre

Buildroot: 	%{_tmppath}/%{name}-%{version}-root 

%global _missing_build_ids_terminate_build 0

%description
The ACCEL-PPP v1.0 is completly new implementation of PPTP/PPPoE/L2TP
which was written from scratch.  Userspace daemon has its own
PPP implementation, so it does not uses pppd and one process
(multi-threaded) manages all connections.  ACCEL-PPP uses only
kernel-mode implementations of pptp/l2tp/pppoe.

%prep
%setup -n %{name}-%{version}

%build
test -d build/ || mkdir -p build/ 
cd build
%cmake -DBUILD_IPOE_DRIVER=TRUE -DKDIR=/lib/modules/$(uname -r)/build -DRADIUS=TRUE -DLUA=TRUE ..
make %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
test -d %{buildroot}/var/log || mkdir -p %{buildroot}/var/log
cd build/
make install DESTDIR=%{buildroot}/
install -m 644 -D drivers/ipoe/driver/ipoe.ko %{buildroot}/lib/modules/$(uname -r)/extra/accel-ppp/ipoe.ko

%check
ctest -V %{?_smp_mflags}

%pre

%post
depmod -a

%preun

%postun
depmod -a

%define _unpackaged_files_terminate_build 0 

%config
/etc/accel-ppp.conf.dist

%files
%defattr(-,root,root,-)
%doc
/lib/modules/%(uname -r)/extra/accel-ppp/ipoe.ko
/etc/accel-ppp.conf.dist
/etc/sysconfig/accel-pppd
/etc/systemd/system/accel-ppp.service
/usr/bin/accel-cmd
/usr/lib64/accel-ppp/libauth_chap_md5.so
/usr/lib64/accel-ppp/libauth_mschap_v1.so
/usr/lib64/accel-ppp/libauth_mschap_v2.so
/usr/lib64/accel-ppp/libauth_pap.so
/usr/lib64/accel-ppp/libchap-secrets.so
/usr/lib64/accel-ppp/libconnlimit.so
/usr/lib64/accel-ppp/libipoe.so
/usr/lib64/accel-ppp/libippool.so
/usr/lib64/accel-ppp/libipv6_dhcp.so
/usr/lib64/accel-ppp/libipv6_nd.so
/usr/lib64/accel-ppp/libipv6pool.so
/usr/lib64/accel-ppp/libl2tp.so
/usr/lib64/accel-ppp/liblog_file.so
/usr/lib64/accel-ppp/liblog_syslog.so
/usr/lib64/accel-ppp/liblog_tcp.so
/usr/lib64/accel-ppp/liblogwtmp.so
/usr/lib64/accel-ppp/libpppd_compat.so
/usr/lib64/accel-ppp/libpppoe.so
/usr/lib64/accel-ppp/libpptp.so
/usr/lib64/accel-ppp/libradius.so
/usr/lib64/accel-ppp/libredis.so
/usr/lib64/accel-ppp/libshaper.so
/usr/lib64/accel-ppp/libsigchld.so
/usr/lib64/accel-ppp/libtriton.so
/usr/lib64/accel-ppp/libvlan-mon.so
/usr/lib64/accel-ppp/libluasupp.so
/usr/lib64/accel-ppp/libsstp.so
/usr/sbin/accel-pppd
/usr/share/accel-ppp/l2tp/dictionary
/usr/share/accel-ppp/l2tp/dictionary.rfc2661
/usr/share/accel-ppp/l2tp/dictionary.rfc3931
/usr/share/accel-ppp/radius/dictionary
/usr/share/accel-ppp/radius/dictionary.dhcp
/usr/share/accel-ppp/radius/dictionary.alcatel
/usr/share/accel-ppp/radius/dictionary.cisco
/usr/share/accel-ppp/radius/dictionary.microsoft
/usr/share/accel-ppp/radius/dictionary.rfc2865
/usr/share/accel-ppp/radius/dictionary.rfc2866
/usr/share/accel-ppp/radius/dictionary.rfc2867
/usr/share/accel-ppp/radius/dictionary.rfc2868
/usr/share/accel-ppp/radius/dictionary.rfc2869
/usr/share/accel-ppp/radius/dictionary.rfc3162
/usr/share/accel-ppp/radius/dictionary.rfc3576
/usr/share/accel-ppp/radius/dictionary.rfc3580
/usr/share/accel-ppp/radius/dictionary.rfc4072
/usr/share/accel-ppp/radius/dictionary.rfc4372
/usr/share/accel-ppp/radius/dictionary.rfc4675
/usr/share/accel-ppp/radius/dictionary.rfc4679
/usr/share/accel-ppp/radius/dictionary.rfc4818
/usr/share/accel-ppp/radius/dictionary.rfc4849
/usr/share/accel-ppp/radius/dictionary.rfc5176
/usr/share/man/man1/accel-cmd.1.gz
/usr/share/man/man5/accel-ppp.conf.5.gz



%clean
rm -rf $RPM_BUILD_ROOT 

%changelog
* Thu Aug 30 2018 Andreas Koepsel <andreas.koepsel@bisdn.de>
- [redis] => redis plugin

