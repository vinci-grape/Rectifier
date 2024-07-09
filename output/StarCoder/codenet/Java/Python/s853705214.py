import sys

def main():
    n = int(raw_input().strip())
    nums = map(int, raw_input().strip().split(' '))

    min = sys.maxint
    countNegatives = 0
    sum = 0
    for num in nums:
        abs = abs(num)
        sum += abs
        min = min if min < abs else abs
        if num < 0:
            countNegatives += 1

    print sum if countNegatives % 2 == 0 else sum - (min*2)

if __name__ == "__main__":
    main()