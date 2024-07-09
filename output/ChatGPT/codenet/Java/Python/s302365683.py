n=int(input())
hm={}
arr=list(map(int,input().split()))
for val in arr:
    hm[val]=hm.get(val,0)+1
ans=0
for val in hm.keys():
    num=hm[val]
    if num>val:
        ans+=num-val
    elif num<val:
        ans+=num
print(ans)