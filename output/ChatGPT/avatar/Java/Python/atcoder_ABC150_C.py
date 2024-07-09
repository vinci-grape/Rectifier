import itertools

def permutation(target, ans):
    if len(target) <= 1:
        return [ans + target]
    else:
        result = []
        for i in range(len(target)):
            result.extend(permutation(target[:i] + target[i+1:], ans + target[i]))
        return result

def main():
    n = int(input())
    line = [[""] for _ in range(2)]
    for i in range(2):
        for _ in range(n):
            line[i][0] += input()
    
    number = "".join(str(i) for i in range(1, n+1))
    listA = permutation(number, "")
    
    sum = 0
    for j in range(len(line)):
        for i in range(len(listA)):
            if listA[i] == line[j][0]:
                if sum == 0:
                    sum += i
                else:
                    sum -= i
    
    print(abs(sum))

if __name__ == "__main__":
    main()