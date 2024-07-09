n = int(input())
cnt = [1] * 26
s = input().strip()

for i in range(n):
    cnt[ord(s[i]) - ord('a')] += 1

ans = cnt[0]
for i in range(1, 26):
    ans *= cnt[i]
    ans %= int(1e9+7)

print(ans - 1)