def solve():
    N = int(input())
    max_val = min_val = int(input())
    for i in range(1, N):
        in_val = int(input())
        max_val = max(max_val, in_val)
        min_val = min(min_val, in_val)
    print(max_val - min_val)

solve()