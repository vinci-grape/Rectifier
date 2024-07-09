import math

n = int(input())

sqrt = math.sqrt(n)
nearNum = math.floor(sqrt)

ans = int(math.pow(nearNum, 2))

print(ans)