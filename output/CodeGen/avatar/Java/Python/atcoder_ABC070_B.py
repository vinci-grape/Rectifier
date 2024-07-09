def main():
    inputStream = sys.stdin
    outputStream = sys.stdout
    input = inputStream.readline()
    a, b, c, d = map(int, input.split())
    if c > b:
        print(0)
    elif a > d:
        print(0)
    elif a < c:
        print(min(b, d) - c)
    else:
        l = [a, b, c, d]
        l.sort()
        print(l[2] - l[1])
main()