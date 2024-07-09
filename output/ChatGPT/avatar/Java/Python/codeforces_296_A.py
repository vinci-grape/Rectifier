class Task:
    def solve(self, n, array):
        countMax = -1
        for i in range(1, 1001):
            if countMax < array[i]:
                countMax = array[i]
        
        if n % 2 == 0:
            if countMax <= n // 2:
                print("YES")
            else:
                print("NO")
        else:
            if countMax <= n // 2 + 1:
                print("YES")
            else:
                print("NO")

def main():
    n = int(input())
    array = [0] * 1001
    for i in range(n):
        index = int(input())
        array[index] += 1
    
    solver = Task()
    solver.solve(n, array)

if __name__ == "__main__":
    main()