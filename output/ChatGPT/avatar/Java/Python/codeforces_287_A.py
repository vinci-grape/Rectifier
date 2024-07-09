str = []
for i in range(4):
    str.append(input())

yes = 0
for u in range(2):
    for i in range(2):
        if ((str[u][i] == str[u][i+1]) and (str[u+1][i] == str[u][i] or str[u+1][i+1] == str[u][i])) or ((str[u+1][i] == str[u+1][i+1]) and (str[u][i] == str[u+1][i] or str[u][i+1] == str[u+1][i])):
            yes = 1
            print("YES")
            break
    if yes == 1:
        break

if yes == 0:
    print("NO")