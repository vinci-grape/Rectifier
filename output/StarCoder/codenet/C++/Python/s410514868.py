n,k=map(int,raw_input().split())
s=raw_input()
L=s[0]
cnt=0
for i in range(1,n):
    if L==s[i]:cnt+=1
    else:
        L=s[i]
        ans+=cnt
        ans2+=1
        cnt=0
ans+=cnt
ans2+=1
print ans+min(2*k,ans2-1)