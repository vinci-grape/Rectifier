import sys
import math

def cout(str):
    print(str)

if __name__ == '__main__':
    cin = sys.stdin
    n = int(cin.readline())
    str = cin.readline()
    a = ""
    b = ""
    for i in range(n // 2):
        a += str[i]
    if str == a + a:
        cout("Yes")
    else:
        cout("No")