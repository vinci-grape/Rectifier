#!/usr/bin/python

import sys

a = int(raw_input())
S = raw_input()
b = int(raw_input())

if S == '+':
    print a + b

if S == '-':
    print a - b

if S == '*':
    print a * b

if S == '/':
    print a / b

if S == '?':
    break