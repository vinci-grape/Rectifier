L,N = map(int,input().split())
S = [input() for _ in range(N)]
S.sort()
for s in S:
    print(s,end='')
print()