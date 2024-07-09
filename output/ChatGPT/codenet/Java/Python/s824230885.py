CONVSTR = {8: " ", 9: "\n", 0: ""}
inputLine = []
index = 0
read = ''

def hasNext():
    return index < len(inputLine)

def next():
    global index
    if hasNext():
        index += 1
        return inputLine[index-1]
    else:
        raise IndexError("There is no more input")

def nextInt():
    return int(next())

def nextStrArray():
    return next().split()

def nextIntArray():
    return list(map(int, nextStrArray()))

N = nextInt()
list = nextIntArray()
max = 0
output = 0

for i in range(N):
    if max <= list[i]:
        max = list[i]
        output += 1

print(output)