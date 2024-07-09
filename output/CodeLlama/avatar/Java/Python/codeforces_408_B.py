import sys
s1 = sys.stdin.readline().strip()
s2 = sys.stdin.readline().strip()
if isValid(s1, s2) == False:
    print(-1)
else:
    m1 = {}
    m2 = {}
    for c in s1:
        if c in m1:
            m1[c] += 1
        else:
            m1[c] = 1
    for c in s2:
        if c in m2:
            m2[c] += 1
        else:
            m2[c] = 1
    ans = 0
    hs = set()
    for c in s2:
        if c not in hs:
            hs.add(c)
            x1 = m1[c]
            x2 = m2[c]
            x1 = min(x1, x2)
            ans += x1
    print(ans)


def isValid(s1, s2):
    map = {}
    for c in s1:
        map[c] = True
    for c in s2:
        if c not in map:
            return False
    return True