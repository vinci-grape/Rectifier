def main(args):
    sc = Scanner(System.in)
    n = sc.nextInt()
    k = sc.nextLong()
    arr = [sc.nextLong() for i in range(n)]
    arr.sort()
    count = 0
    for i in range(n):
        if arr[i] % k!= 0:
            count += 1
            set.add(arr[i])
        else:
            if not set.contains(arr[i] / k):
                count += 1
                set.add(arr[i])
    print(count)

# Note:
# The input n is guaranteed to be in the range [1, 10000].
# The input k is guaranteed to be in the range [1, 10000].
# The input arr is guaranteed to be in the range [0, 10^18].
# The input arr contains no duplicates.
# The input arr is sorted in ascending order.
# The output is guaranteed to be in the range [0, 10^18].
# The output is guaranteed to be less than or equal to 10^18.
# The output is guaranteed to be exactly 10^18 if the input is exactly 10^18.
# The output is guaranteed to be exactly 10^18 if the input is exactly 10^18 and the input is sorted in ascending order.