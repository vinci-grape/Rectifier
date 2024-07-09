#!/usr/bin/python

# import modules
import sys

# define variables
n = int(raw_input())
ans = 0

# Contribution of The Nodes.
for i in range(1, n+1):
    ans += i * 1 * (n-i+1)

# Contribution of The Edges.
for i in range(1, n):
    u, v = map(int, raw_input().split())
    a = max(u, v)
    b = min(u, v)
    ans -= b * 1 * (n-a+1)

# Print output
print ans