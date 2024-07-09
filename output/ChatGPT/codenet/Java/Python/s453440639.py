def main():
    H, W = map(int, input().split())
    S = []
    for _ in range(H):
        text = input()
        S.append(list(text))
    
    for i in range(H):
        for j in range(W):
            if S[i][j] == '.':
                count = 0
                for a in range(-1, 2):
                    if i + a < 0 or H <= i + a:
                        continue
                    for b in range(-1, 2):
                        if j + b < 0 or W <= j + b:
                            continue
                        if S[i + a][j + b] == '#':
                            count += 1
                S[i][j] = str(count)
            print(S[i][j], end="")
        print()

if __name__ == "__main__":
    main()