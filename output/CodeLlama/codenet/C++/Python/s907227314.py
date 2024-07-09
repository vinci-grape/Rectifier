s = input()
a = 0
z = 0
for i in range(len(s)):
    if s[i] == 'A':
        a = i
        break
for i in range(len(s) - 1, -1, -1):
    if s[i] == 'Z':
        z = i
        break
print(z - a + 1)