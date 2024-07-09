def main():
    N, T = map(int, raw_input().split())
    A = map(int, raw_input().split())
    B = [A[i] - min(A[i], A[i+1]) for i in range(1, N-1)]
    print count(B, *max(B))

if __name__ == '__main__':
    main()