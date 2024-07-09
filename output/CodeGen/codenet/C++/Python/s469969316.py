def parse():
    c = ss[it]
    if '0' <= c and c <= '2': return c-'0'
    if c == '-': return Not(parse())
    x = parse()
    c = ss[it]
    y = parse()
    it += 1
    return c == '*' and And(x, y) or Or(x, y)

def main():
    while True:
        input = input()
        if input == ".": break
        rep(i,3) a[i] = i
        cnt = 0
        rep(i,3) rep(j,3) rep(k,3) {
            a[0] = i
            a[1] = j
            a[2] = k
            ss = input
            for c in ss:
                if c == 'P': c = a[0]+'0'
                if c == 'Q': c = a[1]+'0'
                if c == 'R': c = a[2]+'0'
            it = 0
            if parse() == 2: cnt += 1
        }
        print(cnt)