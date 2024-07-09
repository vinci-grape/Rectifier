import sys

r = int(sys.stdin.readline())

if r < 1200:
    print("ABC")
    sys.exit()

if r < 2800:
    print("ARC")
    sys.exit()

print("AGC")