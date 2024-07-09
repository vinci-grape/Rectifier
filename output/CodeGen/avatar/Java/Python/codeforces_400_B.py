class codeforces_400_B {
    def main(args):
        n = int(input())
        m = int(input())
        arrs = []
        for i in range(n):
            arrs.append(input())
        length = [0] * n
        index = 0
        returnDex = 0
        for tmp in arrs:
            dexG = tmp.index("G")
            dexS = tmp.index("S")
            if dexG > dexS:
                returnDex = -1
            length[index] = dexS - dexG
            index += 1
        set = set()
        for len in length:
            set.add(len)
        if returnDex == -1:
            print(returnDex)
        else:
            print(len(set))

}