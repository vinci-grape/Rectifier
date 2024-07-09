x, y = map(int, input().split())

def check(x, y):
    if y % 2 == 0:
        t = (0.5*y) - x
        if t >= 0 and (x-t) >= 0:
            return "Yes"
    return "No"

print(check(x, y))