def main():
    scn = raw_input()
    n = scn.next()
    arr = [int(scn.next()) for i in range(n)]
    ans = arr[0] + 1
    for i in range(1, n):
        ans += abs(arr[i] - arr[i-1]) + 2
    print ans