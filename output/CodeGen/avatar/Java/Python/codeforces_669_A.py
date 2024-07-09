def main():
    n = int(input())
    solve(n)

def solve(n):
    print((n/3)*2 + (n%3==0))

main()