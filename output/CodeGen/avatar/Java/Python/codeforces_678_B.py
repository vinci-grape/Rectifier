def check_leap(y):
    if y % 400 == 0:
        return True
    elif y % 4 == 0 and y % 100!= 0:
        return True
    else:
        return False

def main():
    y = int(input())
    leap = check_leap(y)
    sum = 0
    for i in range(y + 1):
        if check_leap(i):
            sum += 366
        else:
            sum += 365
        if sum % 7 == 0:
            if (check_leap(i) and leap) or (not check_leap(i) and not leap):
                print(i)
                return
            else:
                continue

if __name__ == "__main__":
    main()