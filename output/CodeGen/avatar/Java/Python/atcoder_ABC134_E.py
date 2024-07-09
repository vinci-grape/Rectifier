def main(args):
    sc = Scanner(sys.stdin)
    n = sc.next()
    map = {}
    while n > 0:
        num = sc.next()
        if num not in map:
            map[num] = 1
        else:
            map[num] += 1
        n -= 1
    ans = 0
    for key in map:
        val = map[key]
        ans += val
    print(ans)