import sys
import collections

def main():
    N = int(sys.stdin.readline().rstrip())
    L = list()
    for i in range(N):
        L.append(int(sys.stdin.readline().rstrip()))
    L.sort()
    count = 0
    for i in range(N):
        for j in range(i + 1, N):
            a = L[i]
            b = L[j]
            res = find(L, j + 1, a + b)
            count += res
    print(count)

def find(li, from, target):
    low = from
    upp = len(li) - 1
    mid = (upp - low + 1) % 2 == 0 and (low + upp) // 2 + 1 or (low + upp) // 2
    if upp - low < 0:
        return 0
    elif li[from] >= target:
        return 0
    elif li[upp] < target:
        return upp - low + 1
    while upp - low > 1:
        if li[mid] >= target:
            upp = mid
        else:
            low = mid
        mid = (upp - low + 1) % 2 == 0 and (low + upp) // 2 + 1 or (low + upp) // 2
    return low - from + 1

if __name__ == '__main__':
    main()