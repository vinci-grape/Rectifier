import sys
input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))

s = []
current = 0
for ai in a:
    if ai <= current:
        if len(s) == k:
            print(ai)
            exit()
        while s and s[-1] >= ai:
            s.pop()
        p = ai - 1
        while True:
            if p < 0:
                print(-1)
                exit()
            sp = s.count(p) + 1
            s.append(p)
            if sp == k:
                s.pop()
                p -= 1
            else:
                break
    current = ai
print(current)