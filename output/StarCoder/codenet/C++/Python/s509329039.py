n,m=map(int,input().split())
s=list(map(int,input().split()))
c=list(map(int,input().split()))
for i in range(1000):
    st=str(i)
    if len(st)!=n:
        continue
    f=1
    for j in range(m):
        if st[s[j]]!=c[j]+'0':
            f=0
    if f:
        print(i)
        break
else:
    print(-1)