import math

A, B, H, M = map(int, input().split())

mkaku = M * 6
hkaku = H * 30 + M / 2
kaku = mkaku - hkaku
dkaku = math.radians(abs(kaku))

AA2 = A * A
BB2 = B * B
CC = AA2 + BB2
DD = 2 * A * B * math.cos(dkaku)

ans2 = CC - DD
ans = math.sqrt(ans2)

print(ans)