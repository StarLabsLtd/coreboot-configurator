Summary: nvramtool
Name: nvramtool
Version: 4.17
Release: 2.1%{?dist}
License: GPLv2
URL: https://review.coreboot.org/coreboot
Source: https://coreboot.org/releases/coreboot-%{version}.tar.xz

BuildRequires: make
BuildRequires: gcc

%description
nvramtool is a utility for reading/writing coreboot parameters and
displaying information from the coreboot table.  It is intended for x86-based
systems (both 32-bit and 64-bit) that use coreboot.

The coreboot table resides in low physical memory, and may be accessed
through the /dev/mem interface.  It is created at boot time by coreboot, and
contains various system information such as the type of mainboard in use.  It
specifies locations in the CMOS (nonvolatile RAM) where the coreboot
parameters are stored.

For information about coreboot, see https://www.coreboot.org/.

%prep
tar -C %{_builddir} -xf %{_sourcedir}/coreboot-%{version}.tar.xz
mv %{_builddir}/coreboot-%{version} %{_builddir}/nvramtool-%{version}
cd %{_builddir}/nvramtool-%{version}/util/nvramtool
DESTDIR=%{buildroot} PREFIX=%{_prefix} make
install -Dm755 nvramtool %{buildroot}/%{_sbindir}/nvramtool
install -m644 cli/nvramtool.8 %{buildroot}/usr/share/man/man8


%files
%{_sbindir}/%{name}

%changelog
* Tue Jul 5 2022 Sean Rhodes <sean@starlabs.systems> 4.17
- initial spec file
