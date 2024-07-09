a, b, c = map(int, input().split())
answer = "No"
if a + b >= c:
    answer = "Yes"
print(answer)