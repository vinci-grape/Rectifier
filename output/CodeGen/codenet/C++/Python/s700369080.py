def main():
    x1, y1, x2, y2 = map(int, raw_input().split())
    dx = x2 - x1
    dy = y2 - y1
    x3 = x2 - dy
    y3 = y2 + dx
    x4 = x1 - dy
    y4 = y1 + dx
    print x3, y3, x4, y4

if __name__ == '__main__':
    main()