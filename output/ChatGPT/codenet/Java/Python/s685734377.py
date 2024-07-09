class TaskB:
    def solve(self, testNumber, in, out):
        n = int(in.next())
        a = []
        P, Q = 37, 47
        powP, powQ = [0] * (n + 1), [0] * (n + 1)
        powP[0] = powQ[0] = 1
        for i in range(1, n + 1):
            powP[i] = powP[i - 1] * P
            powQ[i] = powQ[i - 1] * Q
        for i in range(n):
            a.append(list(in.next()))
        
        hashRow = [[0] * n for _ in range(n)]
        hashCol = [[0] * n for _ in range(n)]
        for i in range(n):
            for j in range(n):
                for k in range(n):
                    hashRow[i][k] += ord(a[i][j]) * powP[(j - k + n) % n]
                    hashCol[j][k] += ord(a[i][j]) * powP[(i - k + n) % n]
        
        ans = 0
        for A in range(n):
            for B in range(n):
                ok = True
                for i in range(n):
                    ok &= hashRow[(i + A) % n][B] == hashCol[(i + B) % n][A]
                ans += 1 if ok else 0
        
        out.println(ans)


def main():
    n = int(input())
    task = TaskB()
    task.solve(1, FastScanner(), PrintWriter())
    
if __name__ == '__main__':
    main()