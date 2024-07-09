n, m = map(int, input().split())
bannedRows = set()
bannedCols = set()

for i in range(m):
    r = int(input())
    if r > 1 and r < n:
        bannedRows.add(r)
    c = int(input())
    if c > 1 and c < n:
        bannedCols.add(c)

answer = (n - 2) * 2
answer -= len(bannedRows)
answer -= len(bannedCols)

if n % 2 != 0:
    mid = (n + 1) // 2
    if mid not in bannedRows and mid not in bannedCols:
        answer -= 1

print(answer)