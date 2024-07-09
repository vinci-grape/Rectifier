def permutation(list, target, ans):
    if len(target) <= 1:
        list.append(ans + target)
    else:
        for i in range(0, len(target)):
            permutation(list, target[:i] + target[i+1:], ans + target[i])
    return list


def main():
    n = int(input())
    line = [[] for i in range(2)]
    for i in range(n):
        line[0].append(input())
    for i in range(n):
        line[1].append(input())
    number = ""
    for i in range(1, n+1):
        number += str(i)
    listA = []
    permutation(listA, number, "")
    sum = 0
    for j in range(0, len(line)):
        for i in range(0, len(listA)):
            if listA[i] == line[j][0]:
                if sum == 0:
                    sum += i
                else:
                    sum -= i
    print(abs(sum))