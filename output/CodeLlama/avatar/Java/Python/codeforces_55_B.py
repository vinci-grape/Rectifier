import sys
min = sys.maxsize
arr = []
for i in range(4):
    arr.append(int(input()))
ops = []
for i in range(3):
    ops.append(input())
def util(arr, ops, idx):
    if idx == 3:
        min = min(min, arr[0])
        return
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            a = []
            for k in range(len(arr)):
                if k != j and k != i:
                    a.append(arr[k])
            if idx < 3 and ops[idx] == "+":
                res = arr[i] + arr[j]
            else:
                res = arr[i] * arr[j]
            a.append(res)
            util(a, ops, idx + 1)
util(arr, ops, 0)
print(min)