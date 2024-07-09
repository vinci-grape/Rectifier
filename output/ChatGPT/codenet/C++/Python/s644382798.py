class P:
    def __init__(self, name, t):
        self.name = name
        self.t = t

Q = []
head = 0
tail = 0
n = 0

def enqueue(x):
    global tail
    Q.append(x)
    tail = (tail + 1) % LEN

def dequeue():
    global head
    x = Q[head]
    head = (head + 1) % LEN
    return x

def min(a, b):
    return a if a < b else b

elaps = 0
c = 0
i = 0
q = 0
u = None

n, q = map(int, input().split())

for i in range(1, n+1):
    name, t = input().split()
    Q.append(P(name, int(t)))
tail = n + 1

while head != tail:
    u = dequeue()
    c = min(q, u.t)
    u.t -= c
    elaps += c
    if u.t > 0:
        enqueue(u)
    else:
        print(u.name, elaps)