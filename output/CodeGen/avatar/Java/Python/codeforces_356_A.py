class codeforces_356_A {
    def main(args):
        in = open(args[0])
        n = int(in.readline())
        left = set()
        answer = [0] * n
        for i in range(n):
            left.add(i)
        q = int(in.readline())
        while q > 0:
            l = int(in.readline()) - 1
            r = int(in.readline()) - 1
            win = int(in.readline())
            while left.ceiling(l)!= None and left.ceiling(l) <= r:
                curr = left.ceiling(l)
                answer[curr] = win
                left.remove(curr)
            answer[win - 1] = 0
            left.add(win - 1)
            q -= 1
        ans = ""
        for i in range(n):
            ans += str(answer[i]) + "\n"
        print(ans)


    def test(args):
        in = open(args[0])
        n = int(in.readline())
        left = set()
        answer = [0] * n
        for i in range(n):
            left.add(i)
        q = int(in.readline())
        while q > 0:
            l = int(in.readline()) - 1
            r = int(in.readline()) - 1
            win = int(in.readline())
            while left.ceiling(l)!= None and left.ceiling(l) <= r:
                curr = left.ceiling(l)
                answer[curr] = win
                left.remove(curr)
            answer[win - 1] = 0
            left.add(win - 1)
            q -= 1
        ans = ""
        for i in range(n):
            ans += str(answer[i]) + "\n"
        print(ans)

}


class FastReader {
    BufferedReader br;
    StringTokenizer st;

    public FastReader() {
        br = new BufferedReader(new
                                InputStreamReader(System.in));
    }

    String next() {
        while (st == null ||!st.hasMoreElements()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }

    int nextInt() {
        return Integer.parseInt(next());
    }

    long nextLong() {
        return Long.parseLong(next());
    }

    double nextDouble() {
        return Double.parseDouble(next());
    }

    String nextLine() {
        String str = "";
        try {
            str = br.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str;
    }
}