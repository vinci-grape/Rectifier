def is_even_string(s):
    a = s[:len(s)//2]
    b = s[len(s)//2:]
    if a == b:
        return True
    else:
        return False

S = input()

if len(S) % 2 == 1:
    S = S[:-1]
else:
    S = S[:-2]

for _ in range(len(S)//2):
    if is_even_string(S):
        break
    S = S[:-2]

print(len(S))