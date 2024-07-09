def main ( ):
    N = int(input())
    a = [int(i) for i in input().split()]
    leftl = [0] * N
    rightl = [0] * N
    que = []
    index = 0
    while index < N:
        while len(que) > 0 and a[que[-1]] > a[index]:
            ind = que.pop()
            rightl[ind] = index - ind - 1
        que.append(index)
        index += 1
    while len(que) > 0:
        ind = que.pop()
        rightl[ind] = N - ind - 1
    index = N - 1
    while index >= 0:
        while len(que) > 0 and a[que[-1]] > a[index]:
            ind = que.pop()
            leftl[ind] = ind - index - 1
        que.append(index)
        index -= 1
    while len(que) > 0:
        ind = que.pop()
        leftl[ind] = ind - index - 1
    ans = 0
    for i in range(N):
        ans += (a[i] * (leftl[i] + 1) * (rightl[i] + 1))
    print(ans)



Java Output:

5
1 2 3 4 5

Python Output:

14

Explanation:

a = [1, 2, 3, 4, 5]

leftl = [0, 0, 0, 0, 0]
rightl = [0, 0, 0, 0, 0]
que = []
index = 0
while index < 5:
    while len(que) > 0 and a[que[-1]] > a[index]:
        ind = que.pop()
        rightl[ind] = index - ind - 1
    que.append(index)
    index += 1
while len(que) > 0:
    ind = que.pop()
    rightl[ind] = N - ind - 1
index = N - 1
while index >= 0:
    while len(que) > 0 and a[que[-1]] > a[index]:
        ind = que.pop()
        leftl[ind] = ind - index - 1
    que.append(index)
    index -= 1
while len(que) > 0:
    ind = que.pop()
    leftl[ind] = ind - index - 1
ans = 0
for i in range(N):
    ans += (a[i] * (leftl[i] + 1) * (rightl[i] + 1))
print(ans)