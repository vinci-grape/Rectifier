def main(args):
    sc = Scanner(System.in)
    n = int(sc.nextLine())
    vStr = sc.nextLine()
    vList = str2List(vStr)
    cStr = sc.nextLine()
    cList = str2List(cStr)
    max = 0
    for i in range(n):
        profit = vList[i] - cList[i]
        if profit > 0:
            max += profit
    print(max)


def str2List(str):
    vArrStr = str.split(' ')
    ret = {}
    key = 0
    for val in vArrStr:
        ret[key] = int(val)
        key += 1
    return ret