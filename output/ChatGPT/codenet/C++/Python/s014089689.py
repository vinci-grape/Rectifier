n = int(input())
s = input()
cnt = 0
i = 0
while i < n:
    cnt += 1
    j = i + 1
    while j < n:
        if s[i] != s[j]:
            break
        j += 1
    i = j - 1
print(cnt)