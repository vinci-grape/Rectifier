n = int(input())
T = {}

for i in range(n):
    com, string = input().split()
    if com == 'i':
        T[string] = True
    else:
        if string in T:
            print("yes")
        else:
            print("no")