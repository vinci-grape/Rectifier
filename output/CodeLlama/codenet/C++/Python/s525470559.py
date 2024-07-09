import sys
from collections import deque

def main():
    n, q = map(int, sys.stdin.readline().split())
    elaps = 0
    Q = deque()

    for _ in range(n):
        name, time = sys.stdin.readline().split()
        Q.append((name, int(time)))

    while Q:
        name, time = Q.popleft()
        if time <= q:
            elaps += time
            print(name, elaps)
        else:
            time -= q
            elaps += q
            Q.append((name, time))

if __name__ == '__main__':
    main()