#!/bin/bash

# Compile all *.c files
gcc -Wall -pedantic -Werror -Wextra -std=
gnu89 -c *.

# Create library
ar rsc liball.a *.o
