def main():
    n, m = map(int, raw_input().split())
    foods = []
    for i in range(m):
        foods.append(int(raw_input()))
    for i in range(n):
        k = int(raw_input())
        for j in range(k):
            foods[int(raw_input())] += 1
    ans = 0
    for i in range(m):
        if foods[i] == n:
            ans += 1
    print ans

if __name__ == '__main__':
    main()