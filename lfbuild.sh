#!/bin/bash

export LFS_TGT="i386-pc-nto-qnx6.3.0-"
# Get around git bash perl not having standard library
# Errors due to mismatching library vs perl exec
# export PERL5LIB=/c/Strawberry/perl/vendor/lib
# export PERL5LIB=/c/Strawberry/perl/lib
echo $LFS_TGT
echo $QNX_TARGET
# echo $PERL5LIB

## openssldir refers to target file system (not the one being built on)

# Override perl version from gitbash to system. However it doesn't understand /c/ paths
# So doesn't understand any of the perl files included as part of the build
# PERL=/c/Strawberry/perl/bin/perl \

# ./Configure linux-generic32 \
#     --cross-compile-prefix=$LFS_TGT \
#     --prefix=/cygdrive/c/QNX630/target/qnx6/usr \
#     --openssldir=/usr/local/openssl \
#     no-shared no-threads no-asm no-hw no-idea 
#     --debug

# no-mdc2 no-rc5 no-ssl2 no-ssl3 \

# Steps:
# Run this script within a cygwin environment with perl installed
# This generates the appropriate Makefile and configdata.pm
# I have copied the working version into a .working file. (.libssl)

# Modify the makefile
#   Removed -ldl and added -lsocket to CNF_EX_LIBS variable in make file
#   To get around max argument list length, manually modified the make file to split the AR command for libcrypto.a in 2. Successfully created a libcrypto of the expected size (30M)
# 
# Patched the source to remove unknown hints

# Made a working make file
./Configure linux-generic32 \
    --cross-compile-prefix=i386-pc-nto-qnx6.3.0- \
    --prefix=/cygdrive/c/QNX630/target/qnx6/usr \
    --openssldir=/usr/local/openssl \
    no-shared no-threads no-asm no-hw no-idea \
    --debug


# flags of note
# https://github.com/openssl/openssl/blob/master/INSTALL

# no-pinshared - disable pinning that can cause crashes on certain platforms
# no-pic - Don't build support for position indepenent code
#   no-posix-io - Maybe posix io is failing
# no-sse2
# --with-rand-seed


# CC=$LFS_TGT-gcc                                    \
# CXX=$LFS_TGT-g++                                   \
# AR=$LFS_TGT-ar                                     \
# RANLIB=$LFS_TGT-ranlib                             \
# ../configure                                       \
#     --prefix=/tools                                \
#     --with-local-prefix=/tools                     \
#     --with-native-system-header-dir=/tools/include \
#     --enable-languages=c,c++                       \
#     --disable-libstdcxx-pch                        \
#     --disable-multilib                             \
#     --disable-bootstrap                            \
#     --disable-libgomp

# cmake -DCMAKE_TOOLCHAIN_FILE=../cmake/toolchain-qnx.cmake -G 'Unix Makefiles' -DCMAKE_BUILD_TYPE=Debug ..