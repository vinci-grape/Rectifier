import sys
n=int(sys.stdin.readline())
count=[0]*(n+1)
for i in range(n):
    count[int(sys.stdin.readline())]+=1
for i in range(1,n+1):
    print(count[i])