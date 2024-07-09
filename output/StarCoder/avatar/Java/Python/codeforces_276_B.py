import sys

for line in sys.stdin:
    str = line.strip()
    map = {}
    oddCount = 0
    for i in range(len(str)):
        ch = str[i]
        if ch in map:
            map[ch] += 1
        else:
            map[ch] = 1
    for entry in map:
        if map[entry] % 2!= 0:
            oddCount += 1
    if oddCount <= 1 or oddCount % 2!= 0:
        print("First")
    else:
        print("Second")