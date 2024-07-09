import sys
import collections

N = int(sys.stdin.readline().rstrip())
size = 1 << N
S = [0] * size
spawned = [False] * size
spawned[size - 1] = True
for i in range(size):
    S[i] = int(sys.stdin.readline().rstrip())
S.sort()
active = collections.deque([S[size - 1]])
spawned[size - 1] = True
for i in range(N):
    active.sort(reverse=True)
    activated = collections.deque()
    next = size - 1
    for slime in active:
        while next >= 0 and (S[next] >= slime or spawned[next]):
            next -= 1
        if next < 0:
            print('No')
            exit()
        spawned[next] = True
        activated.append(S[next])
    active.extend(activated)
print('Yes')