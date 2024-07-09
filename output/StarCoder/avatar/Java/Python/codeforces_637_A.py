import sys
import collections

n = int(raw_input())

a = map(int, raw_input().split())

d = collections.defaultdict(int)

for i in a:
    d[i] += 1

max_v = max(d.values())

for i in a:
    if d[i] == max_v:
        print i
        break