import sys

n,m=map(int,raw_input().split())
A=[]
b=map(int,raw_input().split())
for i in range(n):
	A.append(map(int,raw_input().split()))

for i in range(n):
	c=0
	for j in range(m):
		c+=A[i][j]*b[j]
	print c