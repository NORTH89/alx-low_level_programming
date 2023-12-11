#!/bin/bash
wget -P /tmp https://github.com/NORTH89/alx-low_level_programming/blob/532272e2c713cf78e9e54d816e0e890353d3684e/0x18-dynamic_libraries/lib.so
export LD_PRELOAD=/tmp/lib.so
