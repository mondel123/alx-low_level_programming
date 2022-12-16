#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -shared -o liaball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
