import sys
import io

def read_input():
    buf = io.StringIO(sys.stdin.readline())
    inp = buf.readline().split("")
    n = int(inp[0])
    m = int(inp[1])
    ans = []
    for i in range(n):
        str = buf.readline()
        temp = ""
        for j in range(m):
            if str[j] == "-":
                temp += "-"
            else:
                if (i + j) % 2 == 1:
                    temp += "W"
                else:
                    temp += "B"
        ans.append(temp)
    for i in range(n):
        print(ans[i])

read_input()