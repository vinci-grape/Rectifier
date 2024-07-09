import sys

while True:
    try:
        n = int(raw_input())
        if n == 0:
            break
        sq = [0] * n
        fr = [0] * (n / 2)
        com = []
        tmp = 0
        for i in range(1, n):
            sq[i] = (i * i) % n
        for i in range(1, n):
            f = True
            for j in range(len(com)):
                if com[j] == sq[i]:
                    f = False
                    break
            if f:
                com.append(sq[i])
        for i in range(len(com)):
            for j in range(len(com)):
                if i!= j:
                    tmp = com[i] - com[j]
                    if tmp < 0:
                        tmp += n
                    if tmp > (n - 1) / 2:
                        tmp = n - tmp
                    fr[tmp] += 1
        for i in range(1, (n - 1) / 2 + 1):
            print fr[i]
    except EOFError:
        break