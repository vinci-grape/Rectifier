def main(args):
    n = int(input())
    FfriendPerDay = [0] * 367
    MfriendPerDay = [0] * 367
    for i in range(n):
        c = input().strip()[0]
        a = int(input())
        b = int(input())
        for j in range(a, b + 1):
            if c == 'M':
                MfriendPerDay[j] += 1
            else:
                FfriendPerDay[j] += 1
            if MfriendPerDay[j] < FfriendPerDay[j]:
                if MfriendPerDay[j] > answer:
                    answer = MfriendPerDay[j]
            else:
                if FfriendPerDay[j] > answer:
                    answer = FfriendPerDay[j]
    print(answer * 2)