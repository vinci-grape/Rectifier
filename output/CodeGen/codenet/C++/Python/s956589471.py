def main():
    a, b, c, d, e, k = map(int, raw_input().split())
    print(e - a <= k and "Yay!" or ":(")

main()