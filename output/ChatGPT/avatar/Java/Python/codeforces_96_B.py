number = int(input())
ans = -1
value = 0
mask = 2

while value < number:
    s = bin(mask)[2:]
    s = s.zfill(len(s) + 1)
    zeros = s.count('0')
    
    if zeros != len(s) - zeros:
        continue
    
    s = s.replace('0', '4')
    s = s.replace('1', '7')
    value = int(s)
    mask += 1

print(value)