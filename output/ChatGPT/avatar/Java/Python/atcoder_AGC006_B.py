def print_pattern(x, n):
    max_val = n * 2 - 1
    if x == 1 or x == max_val:
        print("No")
        return
    
    print("Yes")
    ans = ""
    for i in range(x + n - 1, x + n + max_val - 1):
        ans += str((i % max_val) + 1) + "\n"
        
    print(ans)

n, x = map(int, input().split())
print_pattern(x, n)