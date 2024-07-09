MAX = 200000

def main():
    R = [0] * MAX
    n = int(input())
    R = list(map(int, input().split()))
    maxv = R[1] - R[0]
    minv = R[0]
    
    for i in range(1, n):
        maxv = max(maxv, R[i] - minv)
        minv = min(minv, R[i])
    
    print(maxv)

if __name__ == "__main__":
    main()