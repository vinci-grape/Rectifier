import sys

s = sys.stdin.readline().rstrip()
k = int(sys.stdin.readline())

if s[k-1] == '1':
    print(1)
else:
    print(s[k-1])