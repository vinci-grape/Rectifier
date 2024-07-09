import sys

def is_match(set, c):
    return c in set

N = sys.stdin.readline().strip()
tap = N.split()

is_good = True
for i in range(len(tap)):
    if (i + 1) % 2 == 0:
        if not is_match(EVE, tap[i]):
            is_good = False
            break
    else:
        if not is_match(ODD, tap[i]):
            is_good = False
            break

print("Yes" if is_good else "No")