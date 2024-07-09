import sys

def main():
    N = int(input())
    A = int(input())
    B = int(input())
    k = 0
    if 1 <= N and N <= 10 ** 18 and 0 <= A and 0 <= B and 0 < A + B and A + B <= 10 ** 18:
        if A + B <= N:
            k = N // (A + B)
            if N - k * (A + B) > A:
                print(A * k + (N - k * (A + B)) - (N - (k * (A + B) + A)))
            else:
                print(A * k + (N - k * (A + B)))
        elif A + B > N and A <= N:
            print(A)
        else:
            print(N)

if __name__ == '__main__':
    main()