import sys
import math

n=int(sys.stdin.readline())
pre=[0]*(n+1)

for i in range(1,n+1):
    pre[i]=int(sys.stdin.readline())

min=1000000000000000000

for i in range(1,n):
    val1=pre[i]
    val2=pre[n]-pre[i]
    min=min(min,abs(val1-val2))

print(min)