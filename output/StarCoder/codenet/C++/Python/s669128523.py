#depth first search
not lie in stack

import sys

N=100
WHITE=0
GRAY=1
BLACK=2

M=[[0 for i in range(N)] for j in range(N)]
n=0
color=[0 for i in range(N)]
d=[0 for i in range(N)]
f=[0 for i in range(N)]
tt=0

def dfs_visit(u):
	global tt
	global n
	color[u]=GRAY
	d[u]=tt
	tt+=1
	for v in range(n):
		if M[u][v]==0:
			continue
		if color[v]==WHITE:
			dfs_visit(v)
	color[u]=BLACK
	f[u]=tt
	tt+=1

def dfs():
	global n
	for i in range(n):
		color[i]=WHITE
	tt=0
	
	for u in range(n):
		if color[u]==WHITE:
			dfs_visit(u)
	
	for i in range(n):
		print(i+1,d[i],f[i])

if __name__ == '__main__':
	n=int(sys.stdin.readline())
	for i in range(n):
		for j in range(n):
			M[i][j]=0
	for i in range(n):
		u,k=map(int,sys.stdin.readline().split())
		u-=1
		for j in range(k):
			v=int(sys.stdin.readline())
			v-=1
			M[u][v]=1
	dfs()