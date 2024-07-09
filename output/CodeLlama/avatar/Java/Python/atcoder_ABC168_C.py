import math
import sys

A, B, H, M = map(int, sys.stdin.readline().split())
AA = A ** 2
BB = B ** 2
HH = H * 30
MM = M * 6
mkaku = MM - (M / 2)
hkaku = HH + mkaku
kaku = hkaku - mkaku
dkaku = math.fabs(math.radians(kaku))
AA2 = AA * 2
BB2 = BB * 2
CC = AA2 + BB2
DD = math.cos(dkaku) * 2 * AA * BB
ans2 = CC - DD
ans = math.sqrt(ans2)
print(ans)