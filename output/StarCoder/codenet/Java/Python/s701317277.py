import sys

def main():
    N = int(raw_input())
    A = [int(x) for x in raw_input().split()]
    count = 0
    sum = 0
    min = A[0]
    for i in A:
        if i < 0:
            count += 1
        min = min if min < abs(i) else abs(i)
        sum += abs(i)
    if count % 2 == 0:
        print sum
    else:
        print sum - min * 2

if __name__ == "__main__":
    main()