import sys

def main():
    strs = sys.stdin.readline().split(" ")
    nums = []
    top = 0
    for i in range(len(strs)):
        if strs[i].startswith('+'):
            top -= 1
            nums[top-1] = nums[top - 1] + nums[top]
        elif strs[i].startswith('-'):
            top -= 1
            nums[top-1] = nums[top - 1] - nums[top]
        elif strs[i].startswith('*'):
            top -= 1
            nums[top-1] = nums[top - 1] * nums[top]
        else:
            nums.append(int(strs[i]))
            top += 1
    print(nums[0])

if __name__ == "__main__":
    main()