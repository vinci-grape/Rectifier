import sys

abc = [0, 0, 0]

str = sys.stdin.readline()
inp = str.split(" ")
for i in range(len(inp)):
    abc[i] = int(inp[i])

if abc[0] < abc[1] and abc[1] < abc[2]:
    print("Yes")
else:
    print("No")