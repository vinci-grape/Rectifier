def main():
    n = int(input())
    count = int(input())
    printIsland(n, count)


def printIsland(n, count):
    a = (n + 1) // 2
    b = n // 2
    max = a * a + b * b
    if count > max:
        print("NO")
        return
    print("YES")
    for i in range(0, n):
        sb = ""
        for j in range(0, n):
            if ((i + j) % 2 == 0 and count > 0):
                sb += "L"
                count -= 1
            else:
                sb += "S"
        print(sb)