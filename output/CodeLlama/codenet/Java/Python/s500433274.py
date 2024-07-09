import sys
a,b = sys.stdin.readline().split()
c = max(a,b)
if a == c and b != c:
    print("GREATER")
elif b == c and a != c:
    print("LESS")
else:
    print("EQUAL")