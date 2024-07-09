# Python code
n = int(input())
lst = list(map(int, input().split()))
odd = []
total_sum = 0

for num in lst:
    if num % 2 == 0:
        total_sum += num
    else:
        odd.append(num)

odd.sort()

for num in odd:
    total_sum += num

if len(odd) % 2 != 0:
    total_sum -= odd[0]

print(total_sum)