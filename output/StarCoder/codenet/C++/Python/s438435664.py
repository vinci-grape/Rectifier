n,k=map(int,input().split())
sum=0
for b in range(1,n+1):
    cnt=(n+1)//b
    md=(n+1)%b
    sum+=cnt*max(b-k,0)+max(md-k,0)
    if k==0:sum-=1
print(sum)