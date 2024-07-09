import sys
import collections

def main():
    N = int(sys.stdin.readline().rstrip())
    L = list(map(int, sys.stdin.readline().split()))
    L.sort()
    count = 0
    for i in range(N):
        for j in range(i + 1, N):
            a = L[i]
            b = L[j]
            res = find(L, j + 1, a + b)
            count += res
    print(count)

def find(li, fromVal, target):
    low = fromVal
    upp = len(li) - 1
    mid = (upp - low + 1) % 2 == 0 and (low + upp) // 2 + 1 or (low + upp) // 2
    if upp - low < 0:
        return 0
    elif li[fromVal] >= target:
        return 0
    elif li[upp] < target:
        return upp - low + 1
    while upp - low > 1:
        if li[mid] >= target:
            upp = mid
        else:
            low = mid
        mid = (upp - low + 1) % 2 == 0 and (low + upp) // 2 + 1 or (low + upp) // 2
    return low - fromVal + 1

if __name__ == '__main__':
    main()