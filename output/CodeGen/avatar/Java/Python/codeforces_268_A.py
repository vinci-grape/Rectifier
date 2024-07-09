def main(args):
    sc = Scanner(sys.stdin)
    n = int(sc.nextLine())
    h = [int(sc.nextInt()) for i in range(n)]
    g = [int(sc.nextInt()) for i in range(n)]
    for i in range(n):
        for j in range(n):
            if h[i] == g[j]:
                result += 1
    print(result)