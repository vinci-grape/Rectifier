import sys

def main():
    n = int(input())
    ans = [0] * n
    for _ in range(n-1):
        a = int(input())
        a -= 1
        ans[a] += 1
    for i in range(n):
        print(ans[i])

if __name__ == "__main__":
    main()