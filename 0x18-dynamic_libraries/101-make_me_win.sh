#!/bin/bash
gcc random.o -fPIC -shared -o random.so
LD_PRELOAD=$WPD/random.so