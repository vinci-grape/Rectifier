import sys

abc = sys.stdin.readline().split()
if int(abc[0]) < int(abc[1]) and int(abc[1]) < int(abc[2]):
    print("Yes")
else:
    print("No")