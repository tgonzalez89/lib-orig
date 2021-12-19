#!/usr/bin/env bash

rm -rf build install

cmake -S . -B build \
-DSHARED_LIB=OFF \
-DBUILD_EXAMPLES=ON \
-DUSE_EXTENSION=ON \
-DBUILD_DEPS=ON \
-DCMAKE_INSTALL_PREFIX=install \
-DCMAKE_PREFIX_PATH=../mylib-e/install

cmake --build build -j
cmake --install build
