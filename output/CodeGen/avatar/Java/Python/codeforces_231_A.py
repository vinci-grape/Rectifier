def main ():
    t = int(input())
    count = 0
    while t > 0:
        a = int(input())
        b = int(input())
        c = int(input())
        if (a == 1 and b == 1) or (a == 1 and c == 1) or (b == 1 and c == 1) or (a == 1 and b == 1 and c == 1):
            count += 1
        t -= 1
    print(count)