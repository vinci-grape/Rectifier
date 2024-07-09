import sys

a, b, u = sys.stdin.readline().split()
a, b = int(a), int(b)
u = sys.stdin.readline().rstrip()
print(u.replace(str(a), str(a-1)), b) if u == str(a) else print(a, u.replace(str(b), str(b-1)))