import sys

def main():
    N, D, X = map(int, sys.stdin.readline().strip().split())
    A = list(map(int, sys.stdin.readline().strip().split()))
    num_of_chocolate = 0
    for i in range(N):
        days = 0
        counter = 0
        for j in range(D):
            days = j * A[i] + 1
            if days <= D:
                counter += 1
            else:
                break
        num_of_chocolate += counter
    num_of_chocolate += X
    print(num_of_chocolate)

if __name__ == "__main__":
    main()