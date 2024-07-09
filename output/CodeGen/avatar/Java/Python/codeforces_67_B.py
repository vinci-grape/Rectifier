import sys
import itertools

def main():
    n = int(input())
    k = int(input())
    bb = list(map(int, input().split()))
    aa = [0] * n
    m = 0
    for a in range(n - 1, -1, -1):
        j = 0
        while bb[a] > 0:
            if aa[j] >= a + k:
                bb[a] -= 1
                j += 1
            j += 1
        for j_ in range(m, j):
            aa[j_] = aa[j_ - 1]
        aa[j] = a
        m = j + 1
    for i in range(n):
        print(aa[i] + 1 + " ")
    print()

if __name__ == "__main__":
    sys.exit(main())