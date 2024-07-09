#coding:utf-8
n,m,mod=map(int,raw_input().split())
C=[[0]*(n+1)for i in range(n+1)]
pre=[[0]*(n+1)for i in range(n+1)]
f=[[0]*(n+1)for i in range(n+1)]
C[0][0]=1
for i in range(1,n+1):
    C[i][0]=C[i][i]=1
    for j in range(1,i):
        C[i][j]=(C[i-1][j-1]+C[i-1][j])%mod
for i in range(0,m+1):
    f[1][i]=1
    pre[1][i]=m-i+1
for i in range(2,n+2):
    for j in range(0,m+1):
        for k in range(1,i):
            f[i][j]+=f[i-k][j]*pre[k][j+1]%mod*C[i-2][k-1]%mod
            f[i][j]%=mod
    for j in range(m,0,-1):
        pre[i][j]=(pre[i][j+1]+f[i][j])%mod
print f[n+1][0]