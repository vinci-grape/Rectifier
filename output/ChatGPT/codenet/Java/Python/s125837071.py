def main():
    n = int(input())
    ans = 1
    mod = 10**9 + 7
    for i in range(2, n + 1):
        for j in range(2, i + 1):
            if i % j == 0:
                break
        else:
            s = 0
            for k in range(1, n + 1):
                s += find_s(k, i)
            ans = (ans * (s + 1)) % mod
    print(ans)

def find_s(k, i):
    s = 0
    while k % i == 0:
        s += 1
        k //= i
    return s

if __name__ == "__main__":
    main()