import sys

n = int(sys.stdin.readline())

ac_count = 0
wa_count = 0
tle_count = 0
re_count = 0

for i in range(n):
    s = sys.stdin.readline().strip()
    if s == "AC":
        ac_count += 1
    elif s == "WA":
        wa_count += 1
    elif s == "TLE":
        tle_count += 1
    elif s == "RE":
        re_count += 1

print("AC x", ac_count)
print("WA x", wa_count)
print("TLE x", tle_count)
print("RE x", re_count)