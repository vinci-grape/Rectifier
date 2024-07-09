import java.util.ArrayList ; import java.util.Arrays ; import java.util.List ; import java.util.Scanner ; def permutation(list, target, ans):
    if len(target) <= 1:
        list.add(ans + target)
    else:
        for i in range(len(target)):
            permutation(list, target[:i] + target[i+1:], ans + target[i])
    return list

def main():
    scanner = Scanner(System.in)
    n = Integer.parseInt(scanner.next())
    line = [""] * 2
    for i in range(2):
        for j in range(n):
            line[i] += scanner.next()
    number = ""
    for i in range(1, n+1):
        number += str(i)
    listA = ArrayList()
    permutation(listA, number, "")
    sum = 0
    for j in range(2):
        for i in range(listA.size()):
            if listA.get(i).equals(line[j]):
                if sum == 0:
                    sum += i
                else:
                    sum -= i
    System.out.println(Math.abs(sum))

if __name__ == "__main__":
    main()