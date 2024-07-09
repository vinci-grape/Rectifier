import java.util.*;

def main():
    m = int(input())
    n = int(input())
    x = int(input())
    y = int(input())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    x_max = MaxInt(x,a)
    y_min = MinInt(y,b)
    CheckWar(x_max,y_min)

def MaxInt(x,a):
    bignum=x
    for i in range(0,len(a)):
        bignum=max(bignum,a[i])
    return bignum

def MinInt(y,b):
    smallnum=y
    for i in range(0,len(b)):
        smallnum=min(smallnum,b[i])
    return smallnum

def CheckWar(a,b):
    if a>=b:
        print("War")
    else:
        print("No War")

main()