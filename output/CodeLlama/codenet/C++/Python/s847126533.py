#!/usr/bin/python
import sys
import math
def check(n,wei,book):
    tmp=wei
    n-=1
    for i in range(len(book)):
        if tmp<book[i]:
            if n>0:
                n-=1
                tmp=wei
                if tmp<book[i]:
                    return False
            else:
                return False
            #  print n,tmp,book[i]
            tmp-=book[i]
    return True
while True:
    line=sys.stdin.readline().strip()
    if line=='':
        break
    m,n=map(int,line.split())
    book=[]
    for i in range(n):
        line=sys.stdin.readline().strip()
        book.append(int(line))
    #  print m,n,book
    l=0
    r=1500000
    ans=0
    while l<r:
        #  print l,r
        if check(m,(l+r)/2,book):
            ans=(l+r)/2
            if r==(l+r)/2:
                break
            r=(l+r)/2
        else:
            if l==(l+r)/2:
                break
            l=(l+r)/2
    print ans