import math

n = int(input())

sqrt = math.sqrt(n)
nearNum = math.floor(sqrt)

ans = int(nearNum ** 2)

print(ans)