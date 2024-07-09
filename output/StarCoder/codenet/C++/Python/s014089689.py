n=int(input())
s=input()
cnt=0
for i in range(n):
	cnt+=1
	j=i+1
	for j in range(j,n):
		if s[i]!=s[j]:
			break
	i=j-1
print(cnt)