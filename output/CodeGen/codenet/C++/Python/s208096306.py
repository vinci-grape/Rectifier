def gcd(a, b):
    if a < b:
        a, b = b, a
    while b:
        a, b = b, a % b
    return a

def main():
    n = int(input())
    ans = int(input())
    for i in range(1, n):
        a = int(input())
        ans = gcd(ans, a)
    print(ans)

main()