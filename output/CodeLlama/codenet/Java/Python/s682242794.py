import sys

for i in range(7):
    high,low = map(int,sys.stdin.readline().split())
    sa = high-low
    print(sa)