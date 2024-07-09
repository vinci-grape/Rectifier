ODD = {'R', 'U', 'D'}
EVE = {'L', 'U', 'D'}

N = input()

isGood = True
for i in range(len(N)):
    if (i + 1) % 2 == 0:
        if N[i] not in EVE:
            isGood = False
            break
    else:
        if N[i] not in ODD:
            isGood = False
            break

print("Yes" if isGood else "No")