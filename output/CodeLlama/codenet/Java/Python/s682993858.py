while True:
    sum = 0
    s = input()
    if s == '0':
        break
    for i in range(len(s)):
        sum += int(s[i])
    print(sum)