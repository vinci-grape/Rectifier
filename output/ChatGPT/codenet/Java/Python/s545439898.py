count = int(input())
givingNumbers = []

# Read Numbers
for i in range(count):
    givingNumbers.append(int(input()))

# Reversing Numbers
for i in range(count-1, -1, -1):
    print(givingNumbers[i], end="")
    
    if i > 0:
        print(" ", end="")

print()