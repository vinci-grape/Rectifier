# Translate the above C++ code to Python. 

s = input()
found = False

for i in range(ord('a'), ord('z')+1):
    a = 0
    for j in range(len(s)):
        if chr(i) == s[j]:
            a += 1
    if a == 0:
        print(chr(i))
        found = True
        break

if not found:
    print("None")