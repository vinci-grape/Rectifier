s = input()
n = len(s)
v = [0] * 26

for i in range(n):
    v[ord(s[i]) - ord('a')] += 1

ans = "Yes"

for i in range(26):
    if v[i] % 2 != 0:
        ans = "No"
        break

print(ans)