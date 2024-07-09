#!/usr/bin/python
import sys
d = int(sys.argv[1])
n = int(sys.argv[2])

for i in range(0,d):
    for j in range(0,n+1):
        if j == 0 or j == n+1:
            map[i][j] = '.'
        else:
            map[i][j] = '#'

for i in range(1,n+1):
    for j in range(1,n+1):
        if map[i][j] == '#':
            map[i][j] = '.'
        else:
            map[i][j] = '#'

for i in range(1,n+1):
    for j in range(1,n+1):
        print map[i][j]

if i!= d-1:
    print

#print map[i][j]