def main(args):
    n = input()
    arr = []
    for i in range(n):
        if input() == 1:
            arr.append(i)
    if len(arr) == 0:
        print(0)
    else:
        result = 1
        for i in range(1, len(arr)):
            result *= arr[i] - arr[i-1]
        print(result)