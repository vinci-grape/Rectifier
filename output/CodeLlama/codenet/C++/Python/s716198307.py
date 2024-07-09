import math
import cmath
import random
import operator
import functools
n=int(input())
a=[]
avg=0
for i in range(n):
    a.append(int(input()))
    avg+=a[i]
avg/=n
s=abs(a[0]-avg)
ans=0
for i in range(1,n):
    if s>abs(a[i]-avg):
        s=abs(a[i]-avg)
        ans=i
print(ans)