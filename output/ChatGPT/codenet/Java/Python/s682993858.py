while True:
    s = input()
    if s == '0':
        break
    sum = 0
    for char in s:
        sum += int(char)
    print(sum)