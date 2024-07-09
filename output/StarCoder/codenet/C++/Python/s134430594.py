import sys

class SegmentTree:
    def __init__(self, n, arr):
        self.n = n
        self.arr = arr
        self.tree = [0] * (4 * n)
        self.build(1, 0, n - 1)

    def build(self, node, start, end):
        if start == end:
            self.tree[node] = self.arr[start]
            return self.tree[node]
        mid = (start + end) // 2
        self.tree[node] = max(self.build(node * 2, start, mid), self.build(node * 2 + 1, mid + 1, end))
        return self.tree[node]

    def query(self, node, start, end, l, r):
        if l > end or r < start:
            return -sys.maxsize
        if l <= start and end <= r:
            return self.tree[node]
        mid = (start + end) // 2
        return max(self.query(node * 2, start, mid, l, r), self.query(node * 2 + 1, mid + 1, end, l, r))

def main():
    n = int(input())
    arr = list(map(int, input().split()))
    st = SegmentTree(n, arr)
    ans = 0
    for i in range(n):
        r = i
        while r + 1 < n and arr[r] + 1 == arr[r + 1]:
            r += 1
        ans += arr[r]
        i = r
        if st.query(1, 0, n - 1, i - arr[i], i) > i - arr[i]:
            print(-1)
            return
        if i + 1 < n:
            st.tree[1] = max(st.tree[1], i + 1 - arr[i + 1])
    print(ans)

main()