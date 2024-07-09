import sys
n,m=map(int,raw_input().split())
po=map(int,raw_input().split())
po.sort()
print n+m/po[0]