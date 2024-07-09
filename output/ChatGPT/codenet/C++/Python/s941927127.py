W = input()

W = sorted(W)

for i in range(0, len(W), 2):
    if W[i] != W[i+1]:
        print("No")
        exit()

print("Yes")