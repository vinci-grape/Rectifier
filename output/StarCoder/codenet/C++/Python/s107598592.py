N = int(raw_input())
X = map(int, raw_input().split())
Y = sorted(X)
y = Y[N/2]
for i in range(N):
    if X[i] < y:
        print y
    else:
        print Y[N/2-1]