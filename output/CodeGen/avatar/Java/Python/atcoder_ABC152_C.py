def main():
    N = int(input())
    arr = [int(i) for i in input().split()]
    sum = 0
    q = []
    for i in range(N):
        q.append(arr[i])
        if arr[i] <= q[0]:
            sum += 1
    return sum

if __name__ == '__main__':
    main()