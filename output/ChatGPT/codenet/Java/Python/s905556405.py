numlist = []

for i in range(5):
    numlist.append(int(input()))

k = int(input())

if (numlist[4] - numlist[0]) > k:
    print(":(")
else:
    print("Yay!")