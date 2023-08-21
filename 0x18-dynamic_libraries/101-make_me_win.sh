#!/bin/bash
wget -P /tmp/ https://raw.github.com/Yohannes90/alx-low_level_programming/master/0x18-dynamic_libraries/random.so
export LD_PRELOAD=/tmp/random.so