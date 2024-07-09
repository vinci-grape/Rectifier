divide = ["dream", "dreamer", "erase", "eraser"]

S = input()

# Reverse the string S and divide strings
S = S[::-1]
divide = [d[::-1] for d in divide]

# Check if S can be divided by any of the divide strings
can = True
i = 0
while i < len(S):
    can2 = False
    for d in divide:
        if S[i:i+len(d)] == d:
            can2 = True
            i += len(d)
            break
    if not can2:
        can = False
        break

if can:
    print("YES")
else:
    print("NO")