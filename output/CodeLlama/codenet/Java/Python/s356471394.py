import sys

N, M, D = map(int, sys.stdin.readline().split())
room = []

for i in range(N):
    room.append(list(sys.stdin.readline().strip()))

num = 0

def setWE():
    for i in range(N):
        for j in range(M - D + 1):
            if all(room[i][j:j+D] != '#'):
                num += 1

def setNS():
    for i in range(M):
        for j in range(N - D + 1):
            if all(room[j:j+D][i] != '#'):
                num += 1

if M >= D:
    setWE()

if N >= D:
    setNS()

print(num)