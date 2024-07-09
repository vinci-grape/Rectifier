import sys
n = int(sys.stdin.readline())
array = [0] * (n + 1)
for i in range(1, n + 1):
    array[i] = int(sys.stdin.readline())
odd = 0
even = 0
odd_ind = 0
even_ind = 0
for i in range(1, n + 1):
    if array[i] % 2 == 0:
        even += 1
        even_ind = i
    else:
        odd += 1
        odd_ind = i
if odd > even:
    print(even_ind)
else:
    print(odd_ind)