import sys

n = int(sys.stdin.readline().rstrip())
minN = int(sys.stdin.readline().rstrip())-1
for i in range(n-1):
    h = int(sys.stdin.readline().rstrip())
    if minN == h:
        minN = h
    elif minN == h-1:
        minN = h-1
    elif minN < h-1:
        minN = h-1
    elif minN > h:
        print("No")
        sys.exit()
print("Yes")