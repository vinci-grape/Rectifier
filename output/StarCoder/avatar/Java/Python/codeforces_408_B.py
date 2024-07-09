import sys

s1 = sys.stdin.readline().strip()
s2 = sys.stdin.readline().strip()

if isValid(s1, s2):
    print(len(s2))
else:
    print(-1)

def isValid(s1, s2):
    map = {}
    for c in s1:
        if c in map:
            map[c] += 1
        else:
            map[c] = 1
    for c in s2:
        if c not in map:
            return False
    return True