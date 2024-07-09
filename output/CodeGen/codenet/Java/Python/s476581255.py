def bubble_sort(a):
    count = 0
    flag = True
    while flag:
        flag = False
        for j in range(len(a)-1, 0, -1):
            if a[j] < a[j-1]:
                a[j], a[j-1] = a[j-1], a[j]
                count += 1
                flag = True
    return count


def main():
    n = int(input())
    a = [int(i) for i in input().split()]
    count = bubble_sort(a, n)
    for i in range(n):
        if i < n-1:
            print(a[i], end=' ')
        else:
            print(a[i])
    print(count)

if __name__ == '__main__':
    main()