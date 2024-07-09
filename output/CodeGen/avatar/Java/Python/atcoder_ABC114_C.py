def main():
    scanner = Scanner(System.in)
    N = gs()
    i = 357
    c = 0
    while i <= N:
        s = str(i)
        if '3' in s and '5' in s and '7' in s:
            c += 1
        s = s[::-1]
        sb = ''
        f = False
        for j in range(len(s)):
            a = s[len(s) - 1 - j]
            if f:
                sb += a
            else:
                if a == '3':
                    sb += '5'
                    f = True
                elif a == '5':
                    sb += '7'
                    f = True
                else:
                    sb += '3'
        if not f:
            sb += '3'
        sb = sb[::-1]
        sb2 = sb
        i = int(sb2)
    print(c)

def gs():
    return scanner.next()

def gi():
    return int(scanner.next())

def gl():
    return long(scanner.next())

def gd():
    return float(scanner.next())