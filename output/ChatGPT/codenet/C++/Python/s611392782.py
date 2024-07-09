def mul(s, idx):
    res = int(s[idx])
    while idx + 1 < len(s) and s[idx + 1] == '*':
        idx += 2
        res *= int(s[idx])
    return res

def add(s, idx):
    res = mul(s, idx)
    while idx + 1 < len(s) and s[idx + 1] == '+':
        idx += 2
        res += mul(s, idx)
    return res

def bob(s, idx):
    res = int(s[idx])
    while idx + 1 < len(s):
        if s[idx + 1] == '+':
            res += int(s[idx + 2])
        else:
            res *= int(s[idx + 2])
        idx += 2
    return res

while True:
    try:
        s, d = input().split()
        idx = 0
        a = add(s, idx)
        idx = 0
        b = bob(s, idx)
        if a == int(d):
            print("U" if b == int(d) else "M")
        else:
            print("L" if b == int(d) else "I")
    except EOFError:
        break