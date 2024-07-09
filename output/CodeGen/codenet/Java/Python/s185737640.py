def main():
    S = input()
    if len(S) % 2 == 1:
        S = S[0:len(S) - 1]
    else:
        S = S[0:len(S) - 2]
    for S in range(len(S)):
        if isEvenString(S):
            break
    print(len(S))


def isEvenString(S):
    a = S[0:len(S) / 2]
    b = S[len(S) / 2:]
    if a == b:
        return True
    else:
        return False

main()