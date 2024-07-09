import sys
s = list(map(int,sys.stdin.readline().split()))
s.sort()
for i in range(9,6,-1):
    print(s[i])