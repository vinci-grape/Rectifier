import sys

def main():
    N, M, D = map(int, raw_input().split())
    room = []
    for i in range(N):
        room.append(raw_input().strip())

    if M >= D:
        setWE(room, N, M, D)

    if N >= D:
        setNS(room, N, M, D)

    print num

def setWE(room, N, M, D):
    for i in range(N):
        for j in range(M - D + 1):
            canPut = True
            for k in range(D):
                if room[i][j + k] == '#':
                    canPut = False
                    break
            if canPut:
                global num
                num += 1

def setNS(room, N, M, D):
    for i in range(M):
        for j in range(N - D + 1):
            canPut = True
            for k in range(D):
                if room[j + k][i] == '#':
                    canPut = False
                    break
            if canPut:
                global num
                num += 1

if __name__ == '__main__':
    num = 0
    main()