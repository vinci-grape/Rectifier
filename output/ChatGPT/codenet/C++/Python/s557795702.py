INF = 0x3f3f3f3f

def merge(left, mid, right):
    L = a[left:mid]
    R = a[mid:right]
    L.append(INF)
    R.append(INF)
    i = j = 0
    cnt = 0
    for k in range(left, right):
        if L[i] <= R[j]:
            a[k] = L[i]
            i += 1
        else:
            a[k] = R[j]
            j += 1
            cnt += mid - left - i
    return cnt

def mergesort(left, right):
    if left + 1 < right:
        mid = (left + right) // 2
        v1 = mergesort(left, mid)
        v2 = mergesort(mid, right)
        v3 = merge(left, mid, right)
        return v1 + v2 + v3
    return 0

n = int(input())
a = list(map(int, input().split()))
ans = mergesort(0, n)
print(ans)