def main():
    n = int(input())
    nums = [int(i) for i in input().split()]
    min = 2147483647
    countNegatives = 0
    sum = 0
    for num in nums:
        abs = abs(num)
        sum += abs
        min = min(min, abs)
        if num < 0:
            countNegatives += 1
    print(countNegatives % 2 == 0 and sum or sum - (min * 2))

if __name__ == '__main__':
    main()