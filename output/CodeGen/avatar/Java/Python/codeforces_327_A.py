def main(args):
    scanner = Scanner(System.in)
    if scanner.hasNext():
        n = scanner.nextInt()
        arr = [scanner.nextInt() for _ in range(n)]
        max = Integer.MIN_VALUE
        for i in range(n):
            for j in range(i, n):
                x = 0
                brr = [scanner.nextInt() for _ in range(n)]
                for k in brr:
                    if k == 0:
                        brr[k] = 1
                    else:
                        brr[k] = 0
                count = checKNo(brr)
                if count > max:
                    max = count
        if n == 1:
            if arr[0] == 1:
                print(0)
            else:
                print(1)
        else:
            print(max)
    else:
        print(0)

def checKNo(brr):
    val = 0
    for i in brr:
        if i == 1:
            val += 1
    return val

main(sys.argv)