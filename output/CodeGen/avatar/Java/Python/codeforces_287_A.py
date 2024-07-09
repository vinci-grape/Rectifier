def main(args):
    sc = Scanner(System.in)
    str = ['','','','','']
    i = -1
    while i!= 3:
        i = i + 1
        str[i] = sc.next()
    u = -1
    i = -1
    yes = 0
    while u!= 2:
        u = u + 1
        i = -1
        while i!= 2:
            i = i + 1
            if (str[u][i] == str[u][i+1] and (str[u+1][i] == str[u][i] or str[u+1][i+1] == str[u][i])) or (str[u+1][i] == str[u+1][i+1] and (str[u][i] == str[u+1][i] or str[u][i+1] == str[u+1][i])):
                yes = 1
                break
        if yes == 1:
            break
    if yes == 0:
        print("NO")
    else:
        print("YES")