import sys
n = int(raw_input())
for i in range(1,n+1):
    maps[i] = int(raw_input())
    num[i] = maps[i]
maps.sort()
m = n/2
for i in range(1,n+1):
    if num[i] <= maps[m]:
        print maps[m+1]
    else:
        print maps[m]