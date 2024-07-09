import sys
input = sys.stdin.readline

def main():
    n = int(input())
    arr = []
    for i in range(n):
        if int(input()) == 1:
            arr.append(i)
    if not arr:
        print(0)
    else:
        result = 1
        for i in range(1, len(arr)):
            result *= arr[i] - arr[i - 1]
        print(result)

if __name__ == '__main__':
    main()