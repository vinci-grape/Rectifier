import sys
str = sys.stdin.readlines()
str = [i.strip() for i in str]
u = -1
i = -1
yes = 0
while u != 2:
    u = u + 1
    i = -1
    while i != 2:
        i = i + 1
        if (str[u][i] == str[u][i + 1] and (str[u + 1][i] == str[u][i] or str[u + 1][i + 1] == str[u][i])) or (str[u + 1][i] == str[u + 1][i + 1] and (str[u][i] == str[u + 1][i] or str[u][i + 1] == str[u + 1][i])):
            yes = 1
            print("YES")
            break
    if yes == 1:
        break
if yes == 0:
    print("NO")