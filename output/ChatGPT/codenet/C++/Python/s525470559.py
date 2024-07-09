task = {
    "name": "",
    "time": 0
}

n, q = map(int, input().split())

Q = []

for i in range(n):
    tmp = task.copy()
    tmp["name"], tmp["time"] = input().split()
    tmp["time"] = int(tmp["time"])
    Q.append(tmp)

elaps = 0

while len(Q) > 0:
    p = Q.pop(0)
    if p["time"] <= q:
        elaps += p["time"]
        print(p["name"], elaps)
    else:
        p["time"] -= q
        elaps += q
        Q.append(p)