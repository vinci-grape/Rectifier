s = input()

for c in s:
    if c.isupper():
        c = c.lower()
        print(c, end="")
    elif c.islower():
        c = c.upper()
        print(c, end="")
    else:
        print(c, end="")

print()