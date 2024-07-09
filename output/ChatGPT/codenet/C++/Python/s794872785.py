def solve():
    maxsize = 0
    maxcnt = 0
    ans_num = 0
    ans_num2 = 0
    str_v = []

    while True:
        try:
            in_str = input()
            str_v.append(in_str)
            if len(in_str) > maxsize:
                maxsize = len(in_str)
                ans_num = len(str_v) - 1
        except EOFError:
            break

    for i in range(len(str_v)):
        cnt = 0
        for j in range(len(str_v)):
            if str_v[i] == str_v[j]:
                cnt += 1
        if cnt > maxcnt:
            maxcnt = cnt
            ans_num2 = i

    print(str_v[ans_num2], str_v[ans_num])

solve()