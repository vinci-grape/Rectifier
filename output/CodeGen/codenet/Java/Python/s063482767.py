def main():
    sc = Scanner(sys.stdin)
    n = sc.nextInt()
    queue = []
    for i in range(n):
        queue.append(sc.nextInt())
    sum = 0
    for i in range(n - 1):
        sum += queue.pop(0)
    print(queue[0] < sum)

if __name__ == '__main__':
    main()