nums = []
top = 0

def calculate(op):
    global top
    global nums
    if op == '+':
        top -= 1
        nums[top-1] = nums[top-1] + nums[top]
    elif op == '-':
        top -= 1
        nums[top-1] = nums[top-1] - nums[top]
    elif op == '*':
        top -= 1
        nums[top-1] = nums[top-1] * nums[top]
    else:
        nums.append(int(op))
        top += 1

# Read input
strs = input().split()

# Perform calculations
for s in strs:
    calculate(s[0])

# Print result
print(nums[0])