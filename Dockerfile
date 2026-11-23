# syntax=docker/dockerfile:1
#
# OpenSSL 4.1 for QNX 6.3.0 x86, built on the qnx630-toolchain image
# (https://github.com/LukeThoma5/qnx-toolchain).
#
#   docker build -t qnx630-openssl .
#
# The result is BASE plus OpenSSL's headers, static libssl/libcrypto and the
# openssl program installed into the sysroot ($QNX_TARGET/usr). The next
# layer (curl) builds FROM this image.
#
# Options are those of the build deployed on units in 2021:
#   no-shared   static libraries only, linked into libcurl
#   no-threads  OpenSSL's own locking off (revisit: the IoT SDK is threaded)
#   no-asm      the generic C code, as for linux-generic32
#   no-idea     as deployed
#   -lsocket    QNX keeps the socket functions in libsocket
# plus:
#   no-tests    the test programs are not needed to build the libraries
# The deployed build also had --debug (-O0 -g). This is the release build
# (-O3, no debug info): the unit's CPU runs at 266 MHz.
# The OpenSSL directory on the unit (certificates) is /usr/local/openssl.

ARG BASE=qnx630-toolchain

FROM ${BASE} AS build
RUN apt-get update \
 && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends perl \
 && rm -rf /var/lib/apt/lists/*
COPY . /src
WORKDIR /src
RUN ./Configure linux-generic32 \
      --cross-compile-prefix=i386-pc-nto-qnx6.3.0- \
      --prefix="$QNX_TARGET/usr" \
      --openssldir=/usr/local/openssl \
      no-shared no-threads no-asm no-idea no-tests \
      -lsocket \
 && make -j"$(nproc)" \
 && make DESTDIR=/stage install_sw

FROM ${BASE}
COPY --from=build /stage/ /
