def min(arr, ops):
    if len(arr) == 0:
        return
    if len(arr) == 1:
        return arr[0]
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            a = []
            for k in range(len(arr)):
                if k!= i and k!= j:
                    a.append(arr[k])
            if ops[0] == "+":
                res = arr[i] + arr[j]
            else:
                res = arr[i] * arr[j]
            a.append(res)
            min(a, ops)

print(min([1, 2, 3, 4], ["+", "-", "*", "/"]))