def main():
    N = int(input())
    A = list(map(int, input().split()))

    if possible(N, A):
        print("YES")
    else:
        print("NO")

def possible(N, A):
    sum = 0
    for i in range(N):
        sum += A[i]
    
    NS = N * (N + 1) // 2
    if sum % NS != 0:
        return False
    
    K = sum // NS
    for i in range(N):
        j = N - 1 if i == 0 else i - 1
        d = K - (A[i] - A[j])
        if d < 0 or d % N != 0:
            return False
    
    return True

if __name__ == "__main__":
    main()