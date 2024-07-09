n=int(input())
a=list(map(int,input().split()))
a.sort()
tot=0
for i in range(1,n):
	if a[i]==a[i-1]:
		q[tot]=a[i]
		tot+=1
print(q[tot]*q[tot-1])