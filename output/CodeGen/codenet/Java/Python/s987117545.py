def main():
    n = int(input())
    k = int(input())
    ans = 0
    for i in range(k, n+1):
        max = i*(2*n-i+1)/2
        min = i*(i-1)/2
        ans += (max - min + 1) % DEVISOR
    print(ans % DEVISOR)

if __name__ == '__main__':
    main()