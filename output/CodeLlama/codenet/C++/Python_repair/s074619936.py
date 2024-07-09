#!/usr/bin/env python
# -*- coding: utf-8 -*-

while True:
    str = raw_input()
    if str == '0':
        break
    sum = 0
    for i in range(len(str)):
        num = int(str[i])
        sum += num
    print sum