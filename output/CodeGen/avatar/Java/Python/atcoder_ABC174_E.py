class atcoder_ABC174_E {
    def main(args):
        inputStream = System.in
        outputStream = System.out
        inputReader = InputReader(inputStream)
        printWriter = PrintWriter(outputStream)
        Solution = Solution()
        Solution.solve(inputReader, printWriter)
        printWriter.close()
    class Solution {
        def solve(self, inputReader, printWriter):
            n = inputReader.nextInt()
            k = inputReader.nextInt()
            logsLength = inputReader.readArray(n)
            min = 1
            max = (int) 1e9 + 1000
            while min < max:
                mid = (min + max) / 2
                if nei(mid, logsLength, k):
                    max = mid
                else:
                    min = mid + 1
            printWriter.println(min)
        def nei(self, mid, logsLength, k):
            for log in logsLength:
                k -= (log + mid - 1) / mid - 1
            return k >= 0
    }
    class InputReader {
        def __init__(self, inputStream):
            self.reader = BufferedReader(InputStreamReader(inputStream))
            self.tokenizer = None
        def next(self):
            while self.tokenizer == None or not self.tokenizer.hasMoreTokens():
                try:
                    self.tokenizer = StringTokenizer(self.reader.readLine())
                except IOException as e:
                    raise RuntimeError(e)
            return self.tokenizer.nextToken()
        def nextInt(self):
            return int(self.next())
        def readArray(self, n):
            a = [self.nextInt() for i in range(n)]
            return a
    }
}




public class atcoder_ABC174_E {
    public static void main(String[] args) {
        InputStream inputStream = System.in;
        OutputStream outputStream = System.out;
        InputReader in = new InputReader(inputStream);
        PrintWriter out = new PrintWriter(outputStream);
        Solution sol = new Solution();
        sol.solve(in, out);
        out.close();
    }

    private static class InputReader {
        private BufferedReader reader;
        private StringTokenizer tokenizer;

        public InputReader(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream));
            tokenizer = null;
        }

        public String next() {
            while (tokenizer == null ||!tokenizer.hasMoreTokens()) {
                try {
                    tokenizer = new StringTokenizer(reader.readLine());
                } catch (IOException e) {
                    throw new RuntimeException(e);
                }
            }
            return tokenizer.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }

        public int[] readArray(int n) {
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = nextInt();
            }
            return a;
        }
    }

    private static class Solution {
        public void solve(InputReader in, PrintWriter out) {
            int n = in.nextInt();
            int k = in.nextInt();
            int[] logsLength = in.readArray(n);
            int min = 1;
            int max = (int) 1e9 + 1000;
            while (min < max) {
                int mid = (min + max) / 2;
                if (nei(mid, logsLength, k)) {
                    max = mid;
                } else {
                    min = mid + 1;
                }
            }
            out.println(min);
        }

        private boolean nei(int mid, int[] logsLength, int k) {
            for (int log : logsLength) {
                k -= (log + mid - 1) / mid - 1;
            }
            return k >= 0;
        }
    }
}