# Python code:

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

n = int(input())

s = ""

if n == 0:
    print('0')
    exit()

i = 1
while n != 0:
    if n % 2 == 0:
        s += '0'
    else:
        s += '1'

    n -= abs(n % 2)
    n //= -2

s = s[::-1]

print(s)