s = input()
for i in range(ord('a'), ord('z') + 1):
    a = 0
    for j in range(len(s)):
        if i == ord(s[j]):
            a += 1
    if a == 0:
        print(chr(i))
        break
    if i == ord('z'):
        print("None")
        break