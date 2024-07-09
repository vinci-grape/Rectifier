import sys

input_array = sys.stdin.readline().split()
result = 0
for str in input_array:
    result += 1
    if str == "0":
        break
print(result)