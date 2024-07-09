def main(args):
    scan = Scanner(System.in)
    n = scan.nextInt()
    arr = [scan.nextInt() for _ in range(n)]
    answer = abs(arr[0])
    for i in range(1, n):
        answer += abs(arr[i] - arr[i-1])
    print(answer)


# Run the code below to see how your program works.

#print(main(['10']))