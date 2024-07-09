import sys
import math

h,w = map(int,sys.stdin.readline().split())
t = []
for i in range(h):
    t.append(sys.stdin.readline().rstrip())

s = "snuke"
for i in range(h):
    for j in range(w):
        if t[i][j] == s[j]:
            print(chr(ord('A')+j),i+1)
            exit()