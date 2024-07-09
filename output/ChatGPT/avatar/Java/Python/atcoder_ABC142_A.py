code = """
import sys

input = sys.stdin.readline().strip()
input = float(input)

count_odd = round(input / 2)
result = count_odd / input
result = round(result, 10)

print(result)
"""

print(code.strip())