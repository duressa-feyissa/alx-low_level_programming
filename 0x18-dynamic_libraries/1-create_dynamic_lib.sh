#!/bin/bash
gcc -fPIC -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
gcc -shared -o liball.so *.o
