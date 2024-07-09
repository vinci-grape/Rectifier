def main(args):
    n = int(input())
    a = [int(i) for i in input().split()]
    r = 0
    for i in range(n):
        r ^= a[i]
    for i in range(n):
        if i!= 0:
            print(" ")
            print(r ^ a[i])