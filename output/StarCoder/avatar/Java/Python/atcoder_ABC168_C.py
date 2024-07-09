import math

A, B, H, M = map(int, input().split())

kaku = (M * 6) - (H * 30) - (M / 2)

ans = math.sqrt(A**2 + B**2 - 2 * A * B * math.cos(math.radians(kaku)))

print(ans)