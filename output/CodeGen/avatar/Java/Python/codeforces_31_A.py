def main(args):
    sc = Scanner(System.in)
    n = sc.nextInt()
    a = [sc.nextInt() for _ in range(n)]
    f = 0
    for k in range(n):
        t = a[k]
        for i in range(n):
            for j in range(n - 1):
                if i!= j and t == (a[i] + a[j]):
                    f = 1
                    break
                if f == 1:
                    break
            if f == 1:
                break
        if f == 1:
            break
    if f == 1:
        print(k + 1 + " " + (j + 1) + " " + (i + 1))
    else:
        print("-1")

# Input:
# 5
# 1 2 3 4 5
# Output:
# 2 4 1