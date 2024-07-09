def main(args):
    sc = Scanner(System.in)
    n = sc.nextInt()
    m = sc.nextInt()
    if n == 0:
        if m!= 0:
            print("Impossible")
        else:
            print(0 + " " + 0)
        return
    if m <= n:
        if m == 0:
            m = 1
        print(n + " " + (m + n - 1))
        return
    print(m + " " + (m + n - 1))