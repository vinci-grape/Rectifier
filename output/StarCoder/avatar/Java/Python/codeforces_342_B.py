import sys

def main():
    input = sys.stdin.readline().split()
    m = int(input[1])
    s = int(input[2])
    f = int(input[3])
    maxT = -1
    map = {}
    while m > 0:
        mth = sys.stdin.readline().split()
        k = int(mth[0])
        if k not in map:
            map[k] = []
        map[k].append(int(mth[1]))
        map[k].append(int(mth[2]))
        maxT = max(maxT, k)
        m -= 1
    actions = []
    M = 'R' if s < f else 'L'
    d = 1 if s < f else -1
    cur = s
    a = -1
    b = -1
    for t in range(1, maxT+1):
        if t in map:
            a = map[t][0]
            b = map[t][1]
        if t in map and ((cur >= a and cur <= b) or (cur+d >= a and cur+d <= b)):
            actions.append('X')
        else:
            actions.append(M)
            cur += d
        if cur == f:
            break
    while cur!= f:
        actions.append(M)
        cur += d
    print(''.join(actions))

if __name__ == '__main__':
    main()