import java.io.OutputStream;
import java.io.InputStream;
import java.io.IOException;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.BufferedReader;
import java.io.UncheckedIOException;
import java.util.OptionalLong;
import java.nio.charset.Charset;
import java.util.StringTokenizer;
import java.util.stream.LongStream;
import java.io.Writer;
import java.io.OutputStreamWriter;
import java.io.BufferedWriter;
import java.io.InputStream;

class Main {
    def main(self, args):
        inputStream = System.in
        outputStream = System.out
        in = java.io.BufferedReader(java.io.InputStreamReader(inputStream))
        out = java.io.BufferedWriter(java.io.OutputStreamWriter(outputStream))
        solver = Main.DLazyFaith()
        solver.solve(1, in, out)
        out.close()

}

class DLazyFaith {
    def solve(self, testNumber, in, out):
        a = in.readInt()
        b = in.readInt()
        q = in.readInt()
        s = [0] * (a + 2)
        t = [0] * (b + 2)
        s[0] = t[0] = -10_000_000_000L
        for i in range(0, a):
            s[i + 1] = in.readLong()
        for i in range(0, b):
            t[i + 1] = in.readLong()
        s[a + 1] = t[b + 1] = 20_000_000_000L
        for i in range(0, q):
            x =