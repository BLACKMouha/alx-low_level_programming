#!/bin/bash
#Create a script that creates a dynamic library called liball.so
#from all .c files that in the current directory

gcc -Wall -Werror -c -fPIC *.c
gcc *.o - shared -o liball.so
