import sys
from collections import defaultdict

INF = sys.maxsize
MOD = 1_000_000_007
SIZE = 1_000_000

def main():
    n, m = map(int, input().split())
    d = defaultdict(int)

    for _ in range(m):
        s, c = map(int, input().split())
        if d[s] != 0 and d[s] != c:
            print(-1)
            sys.exit(0)
        d[s] = c

    for i in range(1000):
        if len(str(i)) < n:
            continue
        flag = True
        for j in range(n):
            if (j+1 not in d and int(str(i)[j]) != 0) or (j+1 in d and d[j+1] != int(str(i)[j])):
                flag = False
                break
        if flag and len(str(i)) == n:
            print(i)
            sys.exit(0)

    print(-1)

if __name__ == "__main__":
    main()