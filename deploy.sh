#! /bin/sh

home_libs=~/libs

if test -d /llj/libs ; then
   home_libs=/llj/libs
fi

home_cata=${home_libs}/cata

./configure --prefix=${home_cata}

if test -d ${home_cata}; then
    rm -rf ${home_cata}
fi

make install

make distclean
