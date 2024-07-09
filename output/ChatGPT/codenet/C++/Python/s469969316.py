def Not(x):
    return 2 - x

def And(x, y):
    if x * y == 0:
        return 0
    if x == 2 and y == 2:
        return 2
    return 1

def Or(x, y):
    if x == 2 or y == 2:
        return 2
    if x == 1 or y == 1:
        return 1
    return 0

def parse(ss, it):
    c = ss[it]
    it += 1
    if '0' <= c <= '2':
        return int(c)
    if c == '-':
        return Not(parse(ss, it))

    x = parse(ss, it)
    c = ss[it]
    it += 1
    y = parse(ss, it)
    it += 1
    if c == '*':
        return And(x, y)
    return Or(x, y)

while True:
    input_str = input().strip()
    if input_str == '.':
        break

    a = [0, 1, 2]
    cnt = 0
    for i in range(3):
        for j in range(3):
            for k in range(3):
                a[0] = i
                a[1] = j
                a[2] = k
                ss = input_str
                for idx, c in enumerate(ss):
                    if c == 'P':
                        ss = ss[:idx] + str(a[0]) + ss[idx+1:]
                    elif c == 'Q':
                        ss = ss[:idx] + str(a[1]) + ss[idx+1:]
                    elif c == 'R':
                        ss = ss[:idx] + str(a[2]) + ss[idx+1:]
                it = 0
                if parse(ss, it) == 2:
                    cnt += 1
    print(cnt)