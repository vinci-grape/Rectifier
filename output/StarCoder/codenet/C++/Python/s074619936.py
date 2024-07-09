while True:
    try:
        str = raw_input()
        if str == '0':
            break
        sum = 0
        for i in str:
            sum += int(i)
        print sum
    except EOFError:
        break