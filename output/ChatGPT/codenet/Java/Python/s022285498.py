class Task:
    def solve(self, testNumber, in, out):
        n = int(in.next())
        countArr = [0] * (n + 1)
        for x in range(1, 101):
            for y in range(1, 101):
                for z in range(1, 101):
                    value = x * x + y * y + z * z + x * y + x * z + y * z
                    if value > n:
                        break
                    countArr[value] += 1

        for i in range(1, n + 1):
            out.println(countArr[i])

def sort(arr):
    arr.sort()


def solve():
    task = Task()
    task.solve(1, in, out)
    out.close()


solve()