import sys

n = int(sys.stdin.readline())
if n == 1:
    print("Hello World")
else:
    strs = sys.stdin.readline().split()
    print(int(strs[0]) + int(strs[1]))