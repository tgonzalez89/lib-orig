#!/usr/bin/env bash

rm -rf build

cmake -S . -B build \
-DCMAKE_PREFIX_PATH="../install;../../mylib-e/install" \
-DUSE_EXTENSION=ON

cmake --build build -j
