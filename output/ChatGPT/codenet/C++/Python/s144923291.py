import sys

def main():
    h, w = map(int, input().split())
    s = "snuke"
    for i in range(h):
        for j in range(w):
            t = input().strip()
            if t == s:
                c = chr(ord('A') + j)
                print(c + str(i+1))
                return

if __name__ == "__main__":
    main()