def can_take(x_needed, x_available, y_needed, y_available):
    if x_needed > x_available:
        return False
    if y_needed > y_available:
        return False
    return True

def main():
    try:
        x = int(input())
        y = int(input())
        while True:
            if turn % 2 == 0:
                if can_take(2, x, 2, y):
                    x -= 2
                    y -= 2
                elif can_take(1, x, 12, y):
                    x -= 1
                    y -= 12
                elif can_take(0, x, 22, y):
                    y -= 22
                else:
                    print('hanako')
                    return
            else:
                if can_take(0, x, 22, y):
                    y -= 22
                elif can_take(1, x, 12, y):
                    x -= 1
                    y -= 12
                elif can_take(2, x, 2, y):
                    x -= 2
                    y -= 2
                else:
                    print('ciel')
                    return
            turn += 1
    except EOFError:
        pass

if __name__ == '__main__':
    main()