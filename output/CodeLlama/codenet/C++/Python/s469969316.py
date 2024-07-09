import sys

def Not(x):
    return 2-x

def And(x, y):
    if x*y == 0: return 0
    if x == 2 and y == 2: return 2
    return 1

def Or(x, y):
    if x == 2 or y == 2: return 2
    if x == 1 or y == 1: return 1
    return 0

def parse():
    global it
    c = ss[it]
    it += 1
    if '0' <= c and c <= '2': return int(c)
    if c == '-': return Not(parse())

    x = parse()
    c = ss[it]
    it += 1
    y = parse()
    it += 1
    return c == '*' and And(x, y) or Or(x, y)

while True:
    input = sys.stdin.readline().rstrip()
    if input == '.': break
    a = [0, 1, 2]
    cnt = 0
    for i in range(3):
        for j in range(3):
            for k in range(3):
                a[0] = i
                a[1] = j
                a[2] = k
                ss = input
                for i in range(len(ss)):
                    if ss[i] == 'P': ss[i] = str(a[0])
                    if ss[i] == 'Q': ss[i] = str(a[1])
                    if ss[i] == 'R': ss[i] = str(a[2])
                it = 0
                if parse() == 2: cnt += 1
    print(cnt)