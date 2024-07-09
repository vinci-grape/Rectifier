def main():
    S = input()
    T = input()
    A = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]
    res = True
    for s in A:
        sIdx = S.find(s)
        if sIdx < 0:
            continue
        t = T[sIdx]
        idx = 0
        while idx < len(S):
            if S.find(s, idx) >= 0:
                if S.find(s, idx) != T.find(t, idx):
                    res = False
                    break
                else:
                    idx = S.find(s, idx) + 1
            elif T.find(t, idx) >= 0:
                res = False
                break
            else:
                break
        if not res:
            break
    if res:
        print("Yes")
    else:
        print("No")

if __name__ == "__main__":
    main()