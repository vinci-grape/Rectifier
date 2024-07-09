def main(argv):
    sc = input()
    n = sc.next()
    ch = [chr(i) for i in range(ord('A'), ord('Z')+1)]
    s1 = 0
    s2 = 0
    i = 0
    j = 0
    flag = 0
    dif = 0
    for i in range(n):
        x = sc.next()
        y = sc.next()
        temp1 = s1 + x
        temp2 = s2 + y
        if abs(temp1 - s2) <= 500:
            s1 += x
            ch[j] = 'A'
            j += 1
            continue
        if abs(temp2 - s1) <= 500:
            s2 += y
            ch[j] = 'G'
            j += 1
            continue
        flag = 1
        break
    if flag == 1:
        print(-1)
    else:
        ans = ""
        ans = ans.join(ch)
        print(ans)