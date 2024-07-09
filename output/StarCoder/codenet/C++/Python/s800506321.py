n,k=map(int,input().split())
x=n//k
y=n%k
if y!=0:
    z=x+1-x
else:
    z=x-x
print(z)