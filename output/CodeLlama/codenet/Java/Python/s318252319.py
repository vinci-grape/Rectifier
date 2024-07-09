import sys

s = sys.stdin.readline().strip()
n = int(s[-1])
if n == 3:
    print('bon')
elif n == 0 or n == 1 or n == 6 or n == 8:
    print('pon')
else:
    print('hon')