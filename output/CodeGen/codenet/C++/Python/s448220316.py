#!/usr/bin/python
import sys
n,m=map(int,raw_input().split())
fa={}
for i in range(1,n+1):
    fa[i]=i
for i in range(1,m+1):
    l,r,v=map(int,raw_input().split())
    li=get(l)
    ri=get(r)
    if li!=ri:
        v[ri]=v[r]-v[l]+v[l]
        fa[ri]=li
    else:
        if v[r]-v[l]!=v:
            print "No"
            sys.exit(0)
print "Yes"