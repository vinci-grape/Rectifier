# -*- coding: utf-8 -*-

def main():
    s = input()

    # 後ろから解くかわりにすべての文字列を「左右反転」する
    s = s[::-1]
    divide = ["dream", "dreamer", "erase", "eraser"]
    divide = [d[::-1] for d in divide]

    # 端から切っていく
    can = True
    for i in range(len(s)):
        can2 = False # 4 個の文字列たちどれかで divide できるか
        for d in divide:
            if s[i:i + len(d)] == d: # d で divide できるか
                can2 = True
                i += len(d) # divide できたら i を進める
        if not can2: # divide できなかったら
            can = False
            break

    if can: print("YES")
    else: print("NO")

if __name__ == "__main__":
    main()