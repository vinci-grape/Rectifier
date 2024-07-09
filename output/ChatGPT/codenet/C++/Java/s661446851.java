//------------------------------------
//........Bismillahir Rahmanir Rahim....
//..........created by Abdul Aziz.......
//------------------------------------
import java.util.*;
import java.io.*;

public class s661446851 {
    static final long MOD = 998244353;
    static BufferedReader br;
    static PrintWriter pw;
    static StringTokenizer st;

    public static void main(String[] args) throws Exception {
        br = new BufferedReader(new InputStreamReader(System.in));
        pw = new PrintWriter(System.out);
        int t = 1; // Integer.parseInt(br.readLine());
        while (t-- > 0) {
            solve();
        }
        pw.close();
    }

    static void solve() throws Exception {
        int n = Integer.parseInt(br.readLine());
        pw.println(n == 0 ? 1 : 0);
    }
}