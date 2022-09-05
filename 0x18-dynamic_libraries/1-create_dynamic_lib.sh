#!/usr/bin/bash
gcc -Wall -c -fPIC *.c
gcc -shared *.0 -o liball.so
