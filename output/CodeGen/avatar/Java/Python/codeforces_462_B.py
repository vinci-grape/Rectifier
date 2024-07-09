def main ():
    try:
        f = open('input.txt', 'r')
        n = int(f.readline().strip())
        k = int(f.readline().strip())
        cards = [c462b() for _ in range(26)]
        for _ in range(n):
            s = f.readline().strip()
            for c in s:
                cards[c - 'A'].left += 1
        for _ in range(k):
            cards.sort()
            left = min(cards[25].left, k - _)
            ans = 0
            for _ in range(left):
                ans += (left - _) * (left - _)
                cards[25].left -= left
                _ += left - 1
            print(ans)
        f.close()
    except IOError:
        print("File not found")

class c462b:
    def __init__(self):
        self.left = 0
    def __lt__(self, other):
        return self.left < other.left

main()