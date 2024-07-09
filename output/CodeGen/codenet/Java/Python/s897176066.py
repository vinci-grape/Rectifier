import java.util.*;

def main():
    N = int(input())
    A = [int(x) for x in input().split()]
    A.sort()
    for j in range(1, N):
        if A[j] == A[j - 1]:
            print("NO")
            break
    print("YES")

if __name__ == "__main__":
    main()