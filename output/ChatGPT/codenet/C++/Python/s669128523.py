#depth first search
#not lie in stack

N=100
WHITE=0
GRAY=1
BLACK=2

M=[[0]*N for i in range(N)]
n=0
color=[0]*N
d=[0]*N
f=[0]*N
tt=0

def dfs_visit(u):
    global tt
    v=0
    color[u]=GRAY
    d[u]=tt+1
    while v<n:
        if M[u][v]==0:
            v+=1
            continue
        if color[v]==WHITE:
            dfs_visit(v)
        v+=1
    color[u]=BLACK
    tt+=1
    f[u]=tt

def dfs():
    global tt
    u=0
    for i in range(n):
        color[i]=WHITE
    tt=0
    while u<n:
        if color[u]==WHITE:
            dfs_visit(u)
        u+=1
    for i in range(n):
        print(i+1,d[i],f[i])

n=int(input())
for i in range(n):
    for j in range(n):
        M[i][j]=0
for i in range(n):
    u,k=map(int,input().split())
    u-=1
    for j in range(k):
        v=int(input())
        v-=1
        M[u][v]=1

dfs()