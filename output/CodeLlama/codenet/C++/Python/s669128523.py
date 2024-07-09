# -*- coding: utf-8 -*-
#深度优先搜索
#不在栈中

def dfs_visit(u):
    global tt
    color[u]=1
    d[u]=tt
    tt+=1
    for v in range(n):
        if M[u][v]==0:
            continue
        if color[v]==0:
            dfs_visit(v)
    color[u]=2
    f[u]=tt
    tt+=1

def dfs():
    global n,tt
    for i in range(n):
        color[i]=0
    tt=0
    for u in range(n):
        if color[u]==0:
            dfs_visit(u)
    for i in range(n):
        print(i+1,d[i],f[i])

if __name__ == '__main__':
    n=int(input())
    M=[[0 for i in range(n)] for j in range(n)]
    color=[0 for i in range(n)]
    d=[0 for i in range(n)]
    f=[0 for i in range(n)]
    for i in range(n):
        k=int(input())
        u=i
        for j in range(k):
            v=int(input())
            M[u][v-1]=1
    dfs()