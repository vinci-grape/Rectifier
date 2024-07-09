import sys

n = int(sys.stdin.readline())

arr = []

for i in range(n):

    arr.append(sys.stdin.readline().strip())

fine = 0

for i in range(n):

    for k in range(n):

        if arr[i][k] == 'C':

            fine += 1

    fine += (fine * (fine - 1)) / 2

    fine = 0

for i in range(n):

    for k in range(n):

        if arr[k][i] == 'C':

            fine += 1

    fine += (fine * (fine - 1)) / 2

    fine = 0

print(fine)