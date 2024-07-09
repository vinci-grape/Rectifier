# -*- coding: utf-8 -*-

# URL_HERE

#!/usr/bin/env python

import sys
import math
import string
import itertools

_fin = open('dataabc155A.txt', 'r')
_fout = open('outputabc155A.txt', 'w')

def readc():
    return _fin.read(1)

def readi():
    return int(_fin.readline())

def readll():
    return long(_fin.readline())

def readstr():
    return _fin.readline().strip()

def readstrs():
    return _fin.readline().strip().split()

def readints():
    return map(int, _fin.readline().strip().split())

def readlls():
    return map(long, _fin.readline().strip().split())

def readlines():
    return _fin.readlines()

def readlines_str():
    return map(string.strip, _fin.readlines())

def readlines_strs():
    return map(string.strip, _fin.readlines())

def readlines_ints():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_ints_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list_list_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list_list_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list_list_list_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list_list_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list_list_list_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list_list_list_list_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list_list_list_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list_list_list_list_list_list_list_list():
    return map(long, map(string.strip, _fin.readlines()))

def readlines_strs_list_list_list_list_list_list_list_list_list_list_list_list():
    return map(string.strip, _fin.readlines())

def readlines_ints_list_list_list_list_list_list_list_list_list_list_list_list_list():
    return map(int, map(string.strip, _fin.readlines()))

def readlines_lls_list_list_list_list_list_list_list_list_list_list