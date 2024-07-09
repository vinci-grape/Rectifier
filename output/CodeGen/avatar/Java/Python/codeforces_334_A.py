class codeforces_334_A {
    def main(args):
        in = input()
        print(in.nextInt() * in.nextInt())
        square = in.nextInt() * in.nextInt()
        odd = []
        even = []
        for i in range(1, square+1):
            if i % 2 == 0:
                even.append(i)
            else:
                odd.append(i)
        loop = square / in.nextInt()
        div = loop / 2
        for i in range(1, loop+1):
            for j in range(0, div):
                if i % 2 == 1:
                    print(odd.pop(0) + " " + even.pop(even.size() - 1))
                else:
                    print(even.pop(0) + " " + odd.pop(odd.size() - 1))
            print()
        print()


}



Input:

3
3
1 2 3
2 4 6
3 5 7

Output:

12
36