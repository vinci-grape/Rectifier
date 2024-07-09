import sys

n, m = map(int, input().split())
ans = []

for _ in range(n):
    str = input()
    temp = ""
    for j in range(m):
        if str[j] == '-':
            temp += "-"
        else:
            if (i + j) % 2 == 1:
                temp += "W"
            else:
                temp += "B"
    ans.append(temp)

for i in range(n):
    print(ans[i])