#!/bin/bash

make
cc test.c testft.a ../libft.a
./a.out
