def main(n):
    x = int(input())
    print(x, n)
    if x == 1 or x == n * 2 - 1:
        print("No")
        return
    print("Yes")
    sep = '\n'
    ans = IntStream.range(x + n - 1, x + n + n * 2 - 1).map(e -> (e % n + 1) + sep).collect(StringBuilder(), StringBuilder().append, StringBuilder().append).toString()
    print(ans)