import sys

a, b = map(int, raw_input().split())
if b%a == 0:
    print a+b
else:
    print b-a