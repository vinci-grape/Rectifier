import sys

n,m=map(int,sys.stdin.readline().split())
A=[[0 for i in range(m)] for j in range(n)]
b=[0 for i in range(m)]

for i in range(n):
    for j in range(m):
        A[i][j]=int(sys.stdin.readline())

for i in range(m):
    b[i]=int(sys.stdin.readline())

for i in range(n):
    c=0
    for j in range(m):
        c+=A[i][j]*b[j]
    print(c)