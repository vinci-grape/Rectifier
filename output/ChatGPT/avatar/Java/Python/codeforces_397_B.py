MOD = int(1e9 + 7)

def main():
    t = int(input())
    for _ in range(t):
        n, a, b = map(int, input().split())
        if n < a:
            print("No")
            continue
        if a == b:
            if n % a == 0:
                print("Yes")
            else:
                print("No")
            continue
        x = b // (b - a)
        if n > x * a:
            print("Yes")
            continue
        low = 1
        high = x + 1
        ans = 1
        while low <= high:
            mid = (low + high) // 2
            if mid * a < n:
                low = mid + 1
            else:
                ans = mid
                high = mid - 1
        if n > (ans - 1) * b and n < ans * a:
            print("No")
        else:
            print("Yes")

if __name__ == "__main__":
    main()