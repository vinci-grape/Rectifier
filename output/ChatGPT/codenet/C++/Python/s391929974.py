while True:
    n = int(input())
    if n == 0:
        break

    sq = [0] * 10000
    fr = [0] * 5000
    com = []

    for i in range(1, n):
        sq[i] = (i*i) % n

    for i in range(1, n):
        f = True
        for j in range(len(com)):
            if com[j] == sq[i]:
                f = False
                break
        if f:
            com.append(sq[i])

    for i in range((n-1)//2+1):
        fr[i] = 0

    for i in range(len(com)):
        for j in range(len(com)):
            if i != j:
                tmp = com[i] - com[j]
                if tmp < 0:
                    tmp += n
                if tmp > (n-1)//2:
                    tmp = n - tmp
                fr[tmp] += 1

    for i in range(1, (n-1)//2+1):
        print(fr[i])