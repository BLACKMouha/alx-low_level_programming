#!/bin/bash
gcc -Wall -Werror -c -fPIC *.c
gcc *.o - shared -o liball.so
