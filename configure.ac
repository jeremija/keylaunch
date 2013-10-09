AC_INIT(keylaunch.c)
dnl Grab the package and version from the top debian/changelog entry.
AM_INIT_AUTOMAKE(`sed 's/ .*$//; q' debian/changelog`, `sed 's/^.*(\(.*\)).*$/\1/; q' debian/changelog`)

dnl create a src/config.h file (Automake will add -DHAVE_CONFIG_H)
AM_CONFIG_HEADER(config.h)

AC_SUBST(VERSION)

ISODATE=`date +%Y-%m-%d`
AC_SUBST(ISODATE)

YEAR=`date +%Y`
AC_DEFINE_UNQUOTED(YEAR, $YEAR, [year when build])

dnl Checks for programs.
AC_PROG_INSTALL
AC_PROG_CC

AC_PATH_XTRA
AC_HEADER_STDC
AC_CHECK_HEADERS(unistd.h sys/param.h sys/time.h time.h sys/mkdev.h sys/sysmacros.h string.h memory.h fcntl.h dirent.h sys/ndir.h ndir.h alloca.h locale.h )

AC_HEADER_MAJOR
AC_FUNC_ALLOCA
AC_STRUCT_TM
AC_STRUCT_ST_BLOCKS
AC_FUNC_CLOSEDIR_VOID
AC_CHECK_FUNCS(mkfifo)
AC_CHECK_FUNC(mknod)

AC_CHECK_LIB(X11, main,, AC_MSG_ERROR([libX11 is missing from your system: Make sure you have both the  X Window System libraries and development headers correctly installed]), $X_CFLAGS $X_PRE_LIBS $X_EXTRA_LIBS $X_LIBS)

AC_CHECK_FUNCS(malloc setlocale strchr strdup strrchr strstr)

AC_ARG_ENABLE(debug, [  --enable-debug          use this option if you want to debug Keylaunch], AC_DEFINE(DEBUG, 1, [use this option if you want to debug keylaunch]))

AC_OUTPUT(Makefile)
