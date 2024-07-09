class atcoder_ABC105_D {
    def main(args):
        inputStream = System.in
        outputStream = System.out
        in = inputReader(inputStream)
        out = printWriter(outputStream)
        solver = TaskD()
        solver.solve(1, in, out)
        out.close()
    def inputReader(inputStream):
        return BufferedReader(inputStreamReader(inputStream))
    def inputStreamReader(inputStream):
        return InputStreamReader(inputStream)
    def printWriter(outputStream):
        return PrintWriter(outputStream)
    class TaskD:
        def solve(self, testNumber, in, out):
            n = in.nextInt()
            m = in.nextInt()
            a = in.nextIntArray(n)
            dp = {}
            ans = 0
            base = 0
            for i in range(n):
                base = (base - a[i] % m + m) % m
                dp.merge((base + a[i]) % m, 1, lambda x, y: x + y)
                ans += dp.get(base, 0)
            out.println(ans)
        def __init__(self):
            pass
    class InputReader:
        def __init__(self, inputStream):
            self.br = BufferedReader(inputStreamReader(inputStream))
            self.st = StringTokenizer("")
        def nextString(self):
            while self.st == "":
                try:
                    self.st = self.br.readLine()
                except IOError:
                    raise InputMismatchException()
            return self.st
        def nextInt(self):
            return int(self.nextString())
        def nextIntArray(self, n):
            res = [0] * n
            for i in range(n):
                res[i] = self.nextInt()
            return res
    class InputStreamReader:
        def __init__(self, inputStream):
            self.is = inputStream
        def read(self):
            return self.is.read()
    class PrintWriter:
        def __init__(self, outputStream):
            self.os = outputStream
        def flush(self):
            self.os.flush()
        def close(self):
            self.os.close()


public class atcoder_ABC105_D {
    public static void main(String[] args) throws IOException {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        TaskD solver = new TaskD();
        solver.solve(1, in, out);
        out.close();
    }
    public static class TaskD {
        public void solve(int testNumber, InputReader in, PrintWriter out) {
            int n = in.nextInt();
            int m = in.nextInt();
            int[] a = in.nextIntArray(n);
            HashMap<Integer, Integer> dp = new HashMap<>();
            long ans = 0;
            int base = 0;
            for (int i = 0; i < n; i++) {
                base = (base - a[i] % m + m) % m;
                dp.merge(base + a[i], 1, Integer::sum);
                ans += dp.getOrDefault(base, 0);
            }
            out.println(ans);
        }
        public void __init__() {
        }
    }
    public static class InputReader {
        BufferedReader br;
        StringTokenizer st;
        public InputReader(InputStream stream) {
            br = new BufferedReader(new InputStreamReader(stream));
            st = new StringTokenizer("");
        }
        public String nextString() {
            while (st == null ||!st.hasMoreTokens()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        public int nextInt() {
            return Integer.parseInt(nextString());
        }
        public int[] nextIntArray(int n) {
            int[] res = new int[n];
            for (int i = 0; i < n; i++) {
                res[i] = nextInt();
            }
            return res;
        }
    }
    public static class InputStreamReader {
        BufferedReader br;
        public InputStreamReader(InputStream stream) {
            br = new BufferedReader(new InputStreamReader(stream));
        }
        public String read() {
            try {
                return br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
                return "";
            }
        }
    }
    public static class PrintWriter {
        BufferedWriter bw;
        public PrintWriter(OutputStream stream) {
            bw = new BufferedWriter(new OutputStreamWriter(stream));
        }
        public void flush() {
            try {
                bw.flush();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        public void close() {
            try {
                bw.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        public void print(Object...objects) {
            for (Object o : objects) {
                bw.write(o.toString());
            }
        }
        public void println(Object...objects) {
            for (Object o : objects) {
                bw.write(o.toString());
            }
            bw.newLine();
        }
    }
}