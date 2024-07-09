def Euclid(x, y):
    if x < y:
        tmp = x
        x = y
        y = tmp
    if not x % y:
        return y
    return Euclid(y, x % y)

def main():
    A, B = map(int, raw_input().split())
    print (A*B) // Euclid(A, B)