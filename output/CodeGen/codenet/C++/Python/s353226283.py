def main():
    n, k, t = map(int, raw_input().split())
    vec = map(int, raw_input().split())
    vec.sort()
    for i in range(0, n-k+1):
        diff = vec[i+k-1] - vec[i]
        if diff < ans:
            ans = diff
    print ans

main()