#!/bin/bash
gcc -shared -o wingame.so -fpic game.c
export LD_PRELOAD=./wingame.so:$LD_LIBRARY_PATH
