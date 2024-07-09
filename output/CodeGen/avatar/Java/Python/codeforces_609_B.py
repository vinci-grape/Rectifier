def main(args):
    n = int(input())
    m = int(input())
    arr = [int(i) for i in input().split()]
    gen = [0] * 11
    for i in arr:
        gen[i] += 1
    ans = 0
    for i in range(1, m + 1):
        for k in range(1, m + 1):
            if i!= k:
                ans += gen[i] * gen[k]
    print(int(ans / 2))