def main():
    n, q = map(int, raw_input().split())
    Q = []
    for i in range(n):
        tmp = raw_input().split()
        Q.append({'name': tmp[0], 'time': int(tmp[1])})
    while len(Q) > 0:
        p = Q.pop(0)
        if p['time'] <= q:
            elaps += p['time']
            print p['name'] +'' + str(elaps)
        else:
            p['time'] -= q
            elaps += q
            Q.append(p)
    return 0

if __name__ == '__main__':
    main()