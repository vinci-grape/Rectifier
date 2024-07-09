N = int(input())
min_val = 0

for i in range(5):
    if i == 0:
        min_val = int(input())
    else:
        min_val = min(min_val, int(input()))