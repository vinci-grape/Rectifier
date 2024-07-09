class atcoder_AGC035_B {
    def main(args):
        sc = Scanner(sys.stdin)
        numNode = sc.nextInt()
        numEdge = sc.nextInt()
        connect = [[] for _ in range(numNode)]
        for i in range(numEdge):
            a = sc.nextInt() - 1
            b = sc.nextInt() - 1
            connect[a].append(b)
            connect[b].append(a)
        if numEdge % 2!= 0:
            print(-1)
            return
        visited = [0] * numNode
        odd = [False] * numNode
        print_ = []
        dfs(0, -1)
        print(print_)
        print(sum(odd))

    def dfs(crt, parent):
        visited[crt] = 1
        crtConnect = connect[crt]
        for child in crtConnect:
            if child == parent or visited[child] == 1:
                continue
            elif visited[child] == 2:
                print_ += [crt + 1, child + 1]
                odd[crt] = not odd[crt]
            else:
                dfs(child, crt)
                if odd[child]:
                    print_ += [child + 1, crt + 1]
                    odd[child] = not odd[child]
                else:
                    print_ += [crt + 1, child + 1]
                    odd[crt] = not odd[crt]
        visited[crt] = 2

}