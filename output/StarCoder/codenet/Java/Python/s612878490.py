import sys

def main():
    N, M = map(int, raw_input().split())
    shortage = map(int, raw_input().split())
    shortage.sort()
    ans = 0
    for i in range(M - 1):
        ans += shortage[i]
    print ans

if __name__ == '__main__':
    main()