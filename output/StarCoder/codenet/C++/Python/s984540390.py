import sys

def main():
    h = int(raw_input().strip())
    ans = 0
    while h!= 1:
        if h % 2!= 0:
            h -= 1
        h /= 2
        ans += 1
    print ans+1

if __name__ == "__main__":
    main()