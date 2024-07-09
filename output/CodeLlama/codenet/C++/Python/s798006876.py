import sys

m,nmi,nma=map(int,sys.stdin.readline().split())
data=list(map(int,sys.stdin.readline().split()))
ma=0
ans=0
for i in range(nmi-1,nma):
    if ma<=data[i]-data[i+1]:
        ans=i+1
        ma=data[i]-data[i+1]
print(ans)