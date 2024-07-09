import sys

for _ in range(int(input())):
    str = [input() for _ in range(4)]
    u = -1
    while u!= 2:
        u += 1
        i = -1
        while i!= 2:
            i += 1
            if (str[u][i] == str[u][i+1] and (str[u+1][i] == str[u][i] or str[u+1][i+1] == str[u][i])) or (str[u+1][i] == str[u+1][i+1] and (str[u][i] == str[u+1][i] or str[u][i+1] == str[u+1][i])):
                print('YES')
                break
        if i == 2:
            print('NO')