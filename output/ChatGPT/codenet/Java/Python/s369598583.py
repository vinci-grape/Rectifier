N = int(input())
count = 0
next = 10
for i in range(1, N+1):
    count += 1
    if i == next - 1:
        i = next * 10 - 1
        next *= 100
print(count)