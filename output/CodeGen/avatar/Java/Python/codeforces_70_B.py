def main(args):
    n = int(input())
    input = input()
    max = -1
    msgLength = [0] * len(input) / 2
    count = 0
    idx = 0
    for i in range(len(input)):
        c = input[i]
        if c == '.' or c == '?' or c == '!':
            msgLength[idx] = count
            count = 0
            idx += 1
        else:
            count += 1
    if max > n:
        print("Impossible")
    else:
        ans = 0
        for i in range(idx):
            l = msgLength[i]
            while i < idx - 1 and l + msgLength[i + 1] + 1 <= n:
                l += msgLength[i + 1] + 1
                i += 1
            ans += 1
        print(ans)