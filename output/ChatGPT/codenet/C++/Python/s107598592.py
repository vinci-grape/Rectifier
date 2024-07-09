N = int(input())
X = []
Y = []

for i in range(N):
    X.append(int(input()))
    Y.append(X[i])

Y.sort()

y = Y[N//2]

for i in range(N):
    if X[i] < Y[N//2]:
        print(Y[N//2])
    else:
        print(Y[N//2 - 1])