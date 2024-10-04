#!/bin/bash

make bonus
cc test_bonus.c testft.a ../libft.a -o bonus
./bonus
