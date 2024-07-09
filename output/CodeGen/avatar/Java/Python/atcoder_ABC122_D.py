def calc():
    N = int(input())
    memo = [{} for _ in range(N + 1)]
    for i in range(N + 1):
        memo[i] = {}
    for i in range(N + 1):
        memo[i]['TTT'] = 1
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if 'AGC' in last3:
                return False
    for i in range(N + 1):
        for j in range(4):
            if 'AGC' in last3:
                return False
            last3 += TOKENS[j]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[1:] + last3[0]
            if 'AGC' in last3:
                return False
        for j in range(3):
            last3 = last3[2:] + last3[1] + last3[0]
            if '