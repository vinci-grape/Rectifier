from collections import deque

LEN = 100005

class P:
    def __init__(self):
        self.name = ""
        self.t = 0

Q = [P() for i in range(LEN)]
head = 0
tail = 0
n = 0

def enqueue(x):
    Q[tail] = x
    tail = (tail + 1) % LEN

def dequeue():
    x = Q[head]
    head = (head + 1) % LEN
    return x

def min(a, b):
    return a if a < b else b

def main():
    elaps = 0
    c = 0
    i = 0
    u = P()
    global n, q
    n, q = map(int, raw_input().split())

    for i in range(1, n + 1):
        raw_input()
        Q[i].name = raw_input().strip()
        Q[i].t = int(raw_input())

    head = 1
    tail = n + 1

    while head!= tail:
        u = dequeue()
        c = min(q, u.t)
        u.t -= c
        elaps += c
        if u.t > 0:
            enqueue(u)
        else:
            print u.name, elaps

if __name__ == "__main__":
    main()