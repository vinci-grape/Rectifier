#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys

def chmax(a,b):
    if a<b:
        a=b
    return a

def chmin(a,b):
    if b<a:
        a=b
    return a

def main():
    N,L=map(int,raw_input().strip().split(' '))
    S=map(str,raw_input().strip().split(' '))
    S.sort()
    for i in range(N):
        print S[i]
    print

if __name__=='__main__':
    main()