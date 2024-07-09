a,b,c=input().split()
a,b=sorted([a,b])
if a>b:
    a,b=b,a
if b>c:
    b,c=c,b
if a>b:
    a,b=b,a
print(a,b,c)