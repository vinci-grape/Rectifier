# Python code equivalent to the given C++ code

seg = [
    [False, True, True, True, True, True, True],
    [False, False, False, False, True, True, False],
    [True, False, True, True, False, True, True],
    [True, False, False, True, True, True, True],
    [True, True, False, False, True, True, False],
    [True, True, False, True, True, False, True],
    [True, True, True, True, True, False, True],
    [False, True, False, False, True, True, True],
    [True, True, True, True, True, True, True],
    [True, True, False, True, True, True, True]
]

while True:
    n = int(input())
    if n == -1:
        break

    st = [False] * 7
    for _ in range(n):
        t = int(input())
        ans = ''
        for i in range(7):
            ans += '1' if st[i] ^ seg[t][i] else '0'
            st[i] = seg[t][i]
        print(ans)