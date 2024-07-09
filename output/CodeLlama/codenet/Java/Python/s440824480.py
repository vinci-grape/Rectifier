import sys
n = int(sys.stdin.readline())
c=0
flg=0
for i in range(n):
    x,y = map(int,sys.stdin.readline().split())
    if x==y:
        c+=1
        if c>=3:
            flg=1
    else:
        c=0
if flg==0:
    print("No")
else:
    print("Yes")