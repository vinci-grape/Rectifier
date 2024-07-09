import sys
from collections import Counter

def main():
    N = int(sys.stdin.readline())
    A = list(map(int, sys.stdin.readline().split()))
    A.sort()
    min_val = A[0]
    max_val = A[-1]
    
    min_count = Counter(A)[min_val]
    max_count = Counter(A)[max_val]
    
    if min_val == max_val:
        result = f"{max_val - min_val} {min_count * (min_count - 1) // 2}"
    else:
        result = f"{max_val - min_val} {min_count * max_count}"
    
    print(result)

if __name__ == "__main__":
    main()