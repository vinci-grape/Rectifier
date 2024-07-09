import sys
from typing import List

def main():
    v = []
    N, L = map(int, input().split())
    for i in range(N):
        s = input().strip()
        v.append(s)

    v.sort()

    for i in range(len(v)):
        print(v[i], end="")

    print()

if __name__ == "__main__":
    main()