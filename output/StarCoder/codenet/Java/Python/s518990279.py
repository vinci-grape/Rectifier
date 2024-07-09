import sys

while True:
    try:
        inputed = sys.stdin.readline().strip()
        if inputed == "0":
            break
        ans = 0
        for i in inputed:
            ans += int(i)
        print(ans)
    except:
        break