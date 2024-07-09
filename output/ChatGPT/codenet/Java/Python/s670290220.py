N = int(input())
c = list(input())
for i in range(len(c)):
    c[i] = chr((ord(c[i]) - ord('A') + N) % 26 + ord('A'))
print(''.join(c))