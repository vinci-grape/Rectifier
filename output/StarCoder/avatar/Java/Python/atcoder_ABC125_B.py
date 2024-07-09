import sys

def str2List(str):
    vArrStr = str.split(" ")
    ret = {}
    key = 0
    for val in vArrStr:
        ret[key] = int(val)
        key += 1
    return ret

n = int(input())
vStr = input()
vList = str2List(vStr)
cStr = input()
cList = str2List(cStr)
max = 0
for i in range(n):
    profit = vList[i] - cList[i]
    if profit > 0:
        max += profit
print(max)