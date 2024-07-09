import sys
n,m=map(int,sys.stdin.readline().split())
po=list(map(int,sys.stdin.readline().split()))
po.sort()
print(n+m//po[0])