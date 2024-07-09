n,k=map(int,input().split())
d=[0]*10
for i in range(k):
    d[int(input())]=1
while True:
    x=n
    hantei=True
    while x:
        if d[x%10]:
            hantei=False
            break
        x//=10
    if hantei:
        print(n)
        break
    n+=1