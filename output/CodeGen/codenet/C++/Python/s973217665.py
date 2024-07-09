def main():
    n = int(raw_input())
    while n > 0:
        p, q = map(int, raw_input().split())
        l = int(sqrt(p*p + q*q))
        isprime = 1
        for i in range(l):
            for j in range(l):
                x = i*i + j*j
                if x <= 1 or x >= p*p + q*q:
                    continue
                if ((i*p + j*q) % x == 0 and (i*q - j*p) % x == 0):
                    isprime = 0
                    break
        print(isprime and "P" or "C")
        n -= 1

if __name__ == "__main__":
    main()