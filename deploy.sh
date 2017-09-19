#! /bin/sh

node=`uname -n`
home_libs=~/libs/${node}

home_cata=${home_libs}/cata

./configure --prefix=${home_cata}

if test -d ${home_cata}; then
    rm -rf ${home_cata}
fi

make install

make distclean
