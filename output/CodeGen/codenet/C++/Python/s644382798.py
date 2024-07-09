def main():
    n, q = map(int, raw_input().split())
    Q = []
    for i in range(1, n + 1):
        Q.append(P(raw_input().strip(), int(raw_input())))
    head = 0
    tail = len(Q)
    while head!= tail:
        u = dequeue()
        c = min(q, u.t)
        u.t -= c
        elaps += c
        if u.t > 0:
            enqueue(u)
        else:
            print u.name, elaps

if __name__ == '__main__':
    main()