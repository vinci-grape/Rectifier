from collections import deque

N = int(input())
a = list(map(int, input().split()))

leftl = [0] * N
rightl = [0] * N
que = deque()
index = 0

while index < N:
    while que and a[que[-1]] > a[index]:
        ind = que.pop()
        rightl[ind] = index - ind - 1
    que.append(index)
    index += 1

while que:
    ind = que.pop()
    rightl[ind] = N - ind - 1

index = N - 1

while index >= 0:
    while que and a[que[-1]] > a[index]:
        ind = que.pop()
        leftl[ind] = ind - index - 1
    que.append(index)
    index -= 1

while que:
    ind = que.pop()
    leftl[ind] = ind - index - 1

ans = sum(a[i] * (leftl[i] + 1) * (rightl[i] + 1) for i in range(N))
print(ans)