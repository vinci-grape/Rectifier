A, B, C, X = map(int, input().split())

cnt = 0
for a in range(A+1):
    for b in range(B+1):
        for c in range(C+1):
            total = 500*a + 100*b + 50*c
            if total == X:
                cnt += 1
print(cnt)