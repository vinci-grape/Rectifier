if __name__ == '__main__':
    s = input()
    d = int(input())

    idx = 0
    a = add(s, idx)
    idx = 0
    b = bob(s, idx)

    if a == d:
        print('U' if b == d else 'M')
    else:
        print('L' if b == d else 'I')

def mul(s, idx):
    res = s[idx] - '0'
    while idx + 1 < len(s) and s[idx + 1] == '*':
        idx += 2
        res *= s[idx] - '0'
    return res

def add(s, idx):
    res = mul(s, idx)
    while idx + 1 < len(s) and s[idx + 1] == '+':
        idx += 2
        res += mul(s, idx)
    return res

def bob(s, idx):
    res = s[idx] - '0'
    while idx + 1 < len(s):
        if s[idx + 1] == '+':
            res += s[idx + 2] - '0'
        else:
            res *= s[idx + 2] - '0'
        idx += 2
    return res