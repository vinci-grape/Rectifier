import sys

n = int(sys.stdin.readline().rstrip())
if n == 1:
    print("Hello World")
else:
    strs = sys.stdin.readline().rstrip().split()
    print(int(strs[0]) + int(strs[1]))