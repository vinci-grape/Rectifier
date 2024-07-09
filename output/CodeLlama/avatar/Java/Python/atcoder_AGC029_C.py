import sys

n = int(sys.stdin.readline().rstrip())
a = list(map(int, sys.stdin.readline().rstrip().split()))
s = dict()


def set():
    global n, a, s
    n = int(sys.stdin.readline().rstrip())
    a = list(map(int, sys.stdin.readline().rstrip().split()))
    s = dict()


def solve():
    global n, a, s
    ng = 0
    ok = n
    while ok - ng > 1:
        k = (ng + ok) // 2
        if isPossible(k):
            ok = k
        else:
            ng = k
    print(ok)


def isPossible(k):
    global n, a, s
    s.clear()
    current = 0
    for ai in a:
        if ai <= current:
            if k == 1:
                return False
            while not s.isdisjoint(range(ai, 0, -1)):
                s.popitem()
            p = ai - 1
            while True:
                if p < 0:
                    return False
                sp = s.get(p, 0) + 1
                s[p] = sp
                if sp == k:
                    s.pop(p)
                    p -= 1
                else:
                    break
        current = ai
    return True


if __name__ == "__main__":
    set()
    solve()