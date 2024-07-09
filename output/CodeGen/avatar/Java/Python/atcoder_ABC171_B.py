class atcoder_ABC171_B {
    def main(self, args):
        inputStream = System.in
        outputStream = System.out
        inputReader = InputReader(inputStream)
        printWriter = PrintWriter(outputStream)
        Solution = Solution()
        Solution.solve(inputReader, printWriter)
        printWriter.close()
    def __init__(self):
        self.inputStream = System.in
        self.outputStream = System.out
        self.inputReader = InputReader(self.inputStream)
        self.printWriter = PrintWriter(self.outputStream)
        self.Solution = Solution()
        self.Solution.solve(self.inputReader, self.printWriter)
        self.printWriter.close()
    def __del__(self):
        self.printWriter.close()
    def solve(self, inputReader, printWriter):
        n = inputReader.n()
        k = inputReader.n()
        a = [inputReader.ni() for i in range(n)]
        a.sort()
        ans = 0
        for i in range(k):
            ans += a[i]
        printWriter.println(ans)
class InputReader:
    def __init__(self, inputStream):
        self.reader = BufferedReader(InputStreamReader(inputStream))
        self.tokenizer = None
    def n(self):
        while self.tokenizer == None or not self.tokenizer.hasMoreTokens():
            try:
                self.tokenizer = StringTokenizer(self.reader.readLine())
            except IOException as e:
                raise RuntimeError(e)
        return int(self.tokenizer.nextToken())
    def ni(self):
        return int(self.n())

class Solution:
    def solve(self, inputReader, printWriter):
        n = inputReader.ni()
        k = inputReader.ni()
        a = [inputReader.ni() for i in range(n)]
        a.sort()
        ans = 0
        for i in range(k):
            ans += a[i]
        printWriter.println(ans)

import java.io.BufferedReader; import java.io.IOException; import java.io.InputStream; import java.io.InputStreamReader; import java.io.OutputStream; import java.io.PrintWriter; import java.util.Arrays; import java.util.StringTokenizer; public class atcoder_ABC171_B { public static void main(String[] args) { InputStream inputStream = System.in; OutputStream outputStream = System.out; InputReader in = new InputReader(inputStream); PrintWriter out = new PrintWriter(outputStream); Solution sol = new Solution(); sol.solve(in, out); out.close(); } private static class InputReader { private BufferedReader reader; private StringTokenizer tokenizer; private InputReader(InputStream stream) { reader = new BufferedReader(new InputStreamReader(stream)); tokenizer = null; } private String n() { while (tokenizer == null ||!tokenizer.hasMoreTokens()) { try { tokenizer = new StringTokenizer(reader.readLine()); } catch (IOException e) { throw new RuntimeException(e); } } return tokenizer.nextToken(); } private int ni() { return Integer.parseInt(n()); } } } }