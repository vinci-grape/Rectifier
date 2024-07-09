result = []
while True:
    n = int(input())
    if n == 0:
        break
    line = input()
    array2 = line.split(" ")
    input = [int(x) for x in array2]
    sum = 0
    for i in range(n):
        sum += input[i]
    avg = sum / n
    num = 0
    for i in range(n):
        if input[i] <= avg:
            num += 1
    result.append(num)

for i in range(len(result)):
    if result[i] == -1:
        print("NONE")
    else:
        print(result[i])