def doIt():
    N = int(input())
    K = long(input())
    A = [int(i) - 1 for i in input().split()]
    used = set()
    idx = [0] * N
    pos = [0] * N
    next = 0
    cur = 0
    while not used.add(next):
        used.add(next)
        idx[next] = cur
        pos[cur] = next
        next = A[next]
        cur += 1
    a = (10000 * (long) cur - K + idx[next]) % (long) cur + idx[next]
    b = idx[next]
    ans = (a // b) + 1
    if b > K:
        ans = K
    print(pos[ans] + 1)

if __name__ == '__main__':
    doIt()