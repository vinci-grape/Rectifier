def main():
    sc = Scanner()
    N = sc.nextInt()
    map = {}
    for i in range(N):
        num = sc.nextInt()
        map[num] = i
    nums = []
    for i in range(N):
        num = sc.nextInt()
        nums.append(num)
    bin = 0
    diff = 0
    while nums:
        num = nums.pop()
        idx = map[num]
        if (bin % 2)!= (idx % 2):
            diff += 1
        bin += 1
        bin %= 2
    ans = (diff / 2)
    print(ans)