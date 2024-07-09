n = int(input())
arr = list(map(int, input().split()))

cnt = 0
flag = True

while True:
    for i in range(n):
        if arr[i] % 2 != 0:
            flag = False
            break
        else:
            arr[i] = arr[i] // 2
    
    if flag:
        cnt += 1
    else:
        break

print(cnt)