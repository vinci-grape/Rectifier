def check(x, y):
    if y % 2 == 0:
        t = (int)(0.5*y) - x
        if t >= 0 and (x-t) >= 0:
            return "Yes"
    return "No"

x, y = map(int, raw_input().split())
print check(x, y)