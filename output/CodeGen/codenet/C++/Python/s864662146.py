def main():
    N = int(input())
    A = [int(x) for x in input().split()]
    m = A[0]
    M = A[0]
    for i in range(N):
        if A[i] < m:
            m = A[i]
        if A[i] > M:
            M = A[i]
    print(M - m)

main()