#!/bin/bash

wget -P /tmp https://github.com/nouran1234567/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
