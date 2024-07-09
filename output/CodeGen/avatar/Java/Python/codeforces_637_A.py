def main(args):
    in = raw_input()
    n = int(in)
    ara = [int(i) for i in raw_input().split()]
    map = {}
    for i in range(n):
        v = int(in)
        ara[i] = v
        if not map.has_key(v):
            map[v] = 1
        else:
            map[v] = map[v] + 1
    max = 0
    for i in map.values():
        max = max if max > i else i
    mm = {}
    for i in range(n):
        if not mm.has_key(ara[i]):
            mm[ara[i]] = 1
        else:
            mm[ara[i]] = mm[ara[i]] + 1
        if mm[ara[i]] == max:
            print ara[i]
            break

if __name__ == "__main__":
    main(sys.argv)