N = int(input())
nums = list(map(int, input().split()))

map = {}
for i in range(N):
    map[nums[i]] = i

nums.sort()

bin = 0
diff = 0
for i in range(N):
    num = nums[i]
    idx = map[num]
    if bin % 2 != idx % 2:
        diff += 1
    bin += 1
    bin %= 2

ans = diff // 2
print(ans)