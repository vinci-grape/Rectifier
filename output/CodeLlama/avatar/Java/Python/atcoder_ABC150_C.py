import sys

def permutation(list, target, ans):
    if len(target) <= 1:
        list.append(ans + target)
    else:
        for i in range(len(target)):
            permutation(list, target[0:i] + target[i + 1:], ans + target[i])
    return list

n = int(sys.stdin.readline())
line = [[""] * 1 for i in range(2)]
for i in range(2):
    for j in range(n):
        line[i][0] += sys.stdin.readline().rstrip()
number = ""
for i in range(1, n + 1):
    number += str(i)
listA = []
permutation(listA, number, "")
sum = 0
for j in range(len(line)):
    for i in range(len(listA)):
        if listA[i] == line[j][0]:
            if sum == 0:
                sum += i
            else:
                sum -= i
print(abs(sum))