#!/usr/bin/python

import sys

def to_string(s):
    return s

def debug(s):
    print s

def print(*args):
    print args

def get():
    pass

def getv(vec):
    for i in range(len(vec)):
        vec[i] = float(raw_input())

def get(a, b):
    return [float(x) for x in raw_input().split()]

def get_input():
    S = raw_input()
    if S == "Sunny":
        print "Cloudy"
    elif S == "Cloudy":
        print "Rainy"
    else:
        print "Sunny"

def main():
    get_input()

if __name__ == "__main__":
    main()