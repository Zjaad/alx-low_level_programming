#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra  -c *.c
ar -t liball.a *.o

ranlib liball.a
