def power(a):
    res = 0
    while a > 0:
        res += 1
        a = a / 10
    return res
def mult(a):
    pow = power(a)
    max = 0
    for j in range(0,pow):
        max = max * 10 + 9
    return a * (max - a)
def main():
    inp = input()
    l = inp.split()
    l = [int(i) for i in l]
    r = inp.split()
    r = [int(i) for i in r]
    res = 0
    maxxes = [0] * 10
    temp = 0
    for i in range(0,10):
        temp = temp * 10 + 9
        maxxes[i] = temp / 2 * (temp - temp / 2)
    res = max(mult(l[0]), res)
    res = max(mult(r[0]), res)
    temp = 0
    for i in range(0,10):
        temp = temp * 10 + 9
        if l[0] <= temp / 2 and temp / 2 <= r[0]:
            res = max(maxxes[i], res)
    print(res)