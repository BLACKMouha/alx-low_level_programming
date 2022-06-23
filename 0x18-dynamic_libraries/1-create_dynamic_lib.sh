#!/bin/bash
#Create a script that creates a dynamic library called liball.so
#from all .c files that in the current directory

gcc *.c -c -fPIC
gcc *.o - shared -o liball.so
export LD_LIBRARY_PATH=$PWD:LD_LIBRARY_PATH

