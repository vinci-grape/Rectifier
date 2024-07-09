def Euclid(x, y):
    if x < y:
        x, y = y, x

    if x % y == 0:
        return y
    return Euclid(y, x % y)

A, B = map(int, input().split())

print((A * B) // Euclid(A, B))