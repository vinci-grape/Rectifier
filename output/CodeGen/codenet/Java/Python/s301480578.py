def main():
    n = int(input())
    h = [int(i) for i in input().split()]
    max = 0
    for l in range(n - 1):
        count = 0
        while l < n - 1 and h[l] >= h[l + 1]:
            l += 1
            count += 1
        max = max if max > count else count
    print(max)

if __name__ == "__main__":
    main()