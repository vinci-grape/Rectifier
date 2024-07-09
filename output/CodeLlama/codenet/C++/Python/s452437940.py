import math
import sys
a,b,x=map(int,sys.stdin.readline().split())
s=int(b/x-a/x)
if a%x==0:
    s+=1
print(s)