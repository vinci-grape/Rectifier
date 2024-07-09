def main(args):
    n = int(input())
    a = [int(i) for i in input().split()]
    a.sort()
    min = a[0]
    for value in a:
        if value % min!= 0:
            print(-1)
            return
    print(min)