n = int(input())

def sub(a, b):
    min_val = min(a, b)
    max_val = max(a, b)
    result = 0
    
    while min_val > 0:
        result += max_val // min_val
        max_val = max_val % min_val
        curr_min = min(min_val, max_val)
        curr_max = max(min_val, max_val)
        min_val = curr_min
        max_val = curr_max
    
    return result

for _ in range(n):
    a, b = map(int, input().split())
    print(sub(a, b))