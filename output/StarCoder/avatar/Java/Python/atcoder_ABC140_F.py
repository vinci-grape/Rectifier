import sys
input = sys.stdin.readline

N = int(input())
size = 1 << N
S = [0] * size
spawned = [False] * size
spawned[size - 1] = True
for i in range(size):
    S[i] = int(input())
S.sort()
active = [S[size - 1]]
spawned[size - 1] = True
for i in range(N):
    active.sort(reverse=True)
    activated = []
    next = size - 1
    for slime in active:
        while next >= 0 and (S[next] >= slime or spawned[next]):
            next -= 1
        if next < 0:
            print("No")
            exit()
        spawned[next] = True
        activated.append(S[next])
    active.extend(activated)
print("Yes")