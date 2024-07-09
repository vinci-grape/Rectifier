n, a, b = input().split()
lista = input().split()
listb = input().split()
for k in range(n):
    if k + 1 in lista:
        print(1, end=" ")
    else:
        print(2, end=" ")