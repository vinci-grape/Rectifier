R = int(input())

def gcd(a,b):
    if a == 0:
        return b
    return gcd(b%a, a)

if R < 1200:
    print("ABC")
elif R >= 2800:
    print("AGC")
else:
    print("ARC")