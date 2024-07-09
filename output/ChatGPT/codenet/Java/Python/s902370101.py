n = int(input())
array = []
max_val = 0
min_val = 10000

for i in range(n):
    num = int(input())
    array.append(num)
    if max_val < num:
        max_val = num
    
    if min_val > num:
        min_val = num

print(max_val - min_val)