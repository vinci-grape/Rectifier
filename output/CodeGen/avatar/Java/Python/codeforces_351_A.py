def main(args):
    n = int(input())
    st = input()
    arr = [float(x) for x in st.split()]
    non_int = 0
    sum_before = 0
    sum = 0
    for i in range(2 * n):
        num = float(st.next())
        sum_before += num
        if num!= int(num):
            non_int += 1
        sum += int(num)
        arr[i] = num
    max_sum = min(n, non_int) + sum
    min_sum = max(0, non_int - n) + sum
    ans = min(1 - sum_before, sum_before - max_sum)
    print("%.3f" % ans)