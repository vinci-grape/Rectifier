def main(args):
    sc = Scanner(System.in)
    a = int(sc.next())
    b = int(sc.next())
    sum = 0
    for i in range(2):
        if a >= b:
            sum += a
            a -= 1
        else:
            sum += b
            b -= 1
    print(sum)