import sys

input = sys.stdin.readline()
input = float(input)
countOdd = int(input / 2)
result = countOdd / input
print(round(result, 10))