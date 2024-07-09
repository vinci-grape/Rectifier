import sys

n, m = sys.stdin.readline().split()
n = int(n)
m = int(m)
ans = []
for i in range(n):
    str = sys.stdin.readline()
    temp = ''
    for j in range(m):
        if str[j] == '-':
            temp += '-'
        else:
            if (i + j) % 2 == 1:
                temp += 'W'
            else:
                temp += 'B'
    ans.append(temp)
for i in range(n):
    print(ans[i])