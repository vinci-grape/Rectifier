import sys

n = int(input())
s = input()

if s == s[::-1]:
    print('Yes')
else:
    print('No')