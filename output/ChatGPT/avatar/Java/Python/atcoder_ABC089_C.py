import sys

def solve(n, words):
    cnt = [0] * 5
    for word in words:
        if word[0] == 'M':
            cnt[0] += 1
        elif word[0] == 'A':
            cnt[1] += 1
        elif word[0] == 'R':
            cnt[2] += 1
        elif word[0] == 'C':
            cnt[3] += 1
        elif word[0] == 'H':
            cnt[4] += 1

    res = cnt[0] * cnt[1] * cnt[2] + cnt[0] * cnt[1] * cnt[3] + cnt[0] * cnt[1] * cnt[4] + cnt[0] * cnt[2] * cnt[3] + cnt[0] * cnt[2] * cnt[4] + cnt[0] * cnt[3] * cnt[4] + cnt[1] * cnt[2] * cnt[3] + cnt[1] * cnt[2] * cnt[4] + cnt[1] * cnt[3] * cnt[4] + cnt[2] * cnt[3] * cnt[4]

    return res

def main():
    n = int(input())
    words = []
    for _ in range(n):
        words.append(input())

    res = solve(n, words)
    print(res)

if __name__ == "__main__":
    main()