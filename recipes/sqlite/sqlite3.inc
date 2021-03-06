DESCRIPTION = "An Embeddable SQL Database Engine"
SECTION = "libs"
PRIORITY = "optional"
DEPENDS = "tcl-native readline ncurses"
LICENSE = "PD"
INC_PR = "r1"

SRC_URI = "http://www.sqlite.org/sqlite-${PV}.tar.gz \
	   file://libtool.patch"

S = "${WORKDIR}/sqlite-${PV}"

inherit autotools pkgconfig

EXTRA_OECONF = "--disable-tcl --enable-shared \
		--enable-threadsafe"
export config_BUILD_CC = "${BUILD_CC}"
export config_BUILD_CFLAGS = "${BUILD_CFLAGS}"
export config_BUILD_LIBS = "${BUILD_LDFLAGS}"
export config_TARGET_CC = "${CC}"
export config_TARGET_LINK = "${CCLD}"
export config_TARGET_CFLAGS = "${CFLAGS}"
export config_TARGET_LFLAGS = "${LDFLAGS}"

do_compile_prepend() {
	oe_runmake sqlite3.h
	install -m 0644 sqlite3.h ${STAGING_INCDIR}
}

PACKAGES = "libsqlite libsqlite-dev libsqlite-doc sqlite3 sqlite3-dbg"
FILES_sqlite3 = "${bindir}/*"
FILES_libsqlite = "${libdir}/*.so.*"
FILES_libsqlite-dev = "${libdir}/*.a ${libdir}/*.la ${libdir}/*.so \
		       ${libdir}/pkgconfig ${includedir}"
FILES_libsqlite-doc = "${docdir} ${mandir} ${infodir}"
AUTO_LIBNAME_PKGS = "libsqlite"
