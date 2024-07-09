import sys

class c462b:
    def __init__(self):
        self.left = 0

def main():
    n, k = map(int, sys.stdin.readline().split())
    cards = [c462b() for _ in range(26)]
    s = sys.stdin.readline().strip()
    
    for t in range(n):
        cards[ord(s[t]) - ord('A')].left += 1
    
    ans = 0
    for i in range(k):
        cards.sort(key=lambda x: x.left)
        change = min(cards[25].left, k - i)
        ans += change * change
        cards[25].left -= change
        i += change - 1
    
    print(ans)

if __name__ == "__main__":
    main()