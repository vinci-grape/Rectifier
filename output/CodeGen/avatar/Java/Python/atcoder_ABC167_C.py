def main():
    n = int(input())
    m = int(input())
    x = int(input())
    a = [[int(i) for i in input().split()] for j in range(n)]
    for i in range(2 ** n):
        status = [0] * n
        for j in range(n):
            if (1 & i >> j) == 1:
                status[j] = 1
        res = [0] * (m + 1)
        for j in range(n):
            if status[j] == 1:
                for k in range(m + 1):
                    res[k] += a[j][k]
        flag = True
        for j in range(1, m + 1):
            if res[j] < x:
                flag = False
                break
        if flag:
            min = min(res[0], res[1])
    if min == -1:
        print(-1)
    else:
        print(min)