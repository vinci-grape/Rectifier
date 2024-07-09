import sys

w = int(sys.stdin.readline())
a = int(sys.stdin.readline())
b = int(sys.stdin.readline())

answer = max(a,b)-min(a,b) -w
if(answer <0):
    print(0)
else:
    print(answer)