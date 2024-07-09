import sys

def main():
    input = sys.stdin.readline
    N = int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    C = list(map(int, input().split()))
    D = list(map(int, input().split()))
    ans = 10 ** 18
    for a in A:
        for b in B:
            for c in C:
                for d in D:
                    if a + b + c + d < ans:
                        ans = a + b + c + d
    print(ans)


if __name__ == '__main__':
    main()