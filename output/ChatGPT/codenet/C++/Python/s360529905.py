import sys
def main():
    N = int(input())
    a = []
    b = []
    for i in range(N):
        a.append(int(input()))
        b.append(a[i])
    b.sort()
    frontHalf = b[N//2-1]
    backHalf = b[N//2]
    del b
    for i in range(N):
        if a[i] < backHalf:
            print(backHalf)
        else:
            print(frontHalf)
    del a

if __name__ == "__main__":
    main()