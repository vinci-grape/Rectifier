def main():
    n = int(input())
    a = [int(i) for i in input().split()]
    swapCount = 0
    for i in range(n):
        mini = i
        for j in range(i, n):
            if a[j] < a[mini]:
                mini = j
        if mini!= i:
            a[mini], a[i] = a[i], a[mini]
            swapCount += 1
    print(a[0])
    for i in range(1, n):
        print(a[i], end=' ')
    print(swapCount)

if __name__ == '__main__':
    main()