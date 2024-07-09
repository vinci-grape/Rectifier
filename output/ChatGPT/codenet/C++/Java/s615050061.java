import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class s615050061 {
    
    static class Pair {
        long first;
        long second;
        
        public Pair(long first, long second) {
            this.first = first;
            this.second = second;
        }
    }
    
    static long B = 13131;
    static int N = 500000 + 7;
    static int n;
    static char[] s = new char[N];
    static long[] f = new long[N];
    static int[] g = new int[N];
    static Map<Long, Long> map;
    static long cnt;
    
    static long pow(long a, long k) {
        if (k < 0) k += (1L << 63) - 1;
        long t = 1;
        for (; k > 0; a *= a, k >>= 1)
            if ((k & 1) == 1) t *= a;
        return t;
    }
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        s = sc.next().toCharArray();
        map = new HashMap<>();
        
        for (int i = 1; i <= n; ++i) {
            if (s[i] == '+' || s[i] == '-')
                f[i] = f[i - 1] + (s[i] == '+' ? 1 : -1) * pow(B, g[i] = g[i - 1]);
            else
                f[i] = f[i - 1];
            g[i] = g[i - 1] + (s[i] == '<' ? -1 : 1);
        }
        
        for (int i = n; i > 0; --i) {
            long key = f[n] * pow(B, g[i - 1]) + f[i - 1];
            map.put(key, map.getOrDefault(key, 0L) + 1);
            cnt += map.getOrDefault(key, 0L);
        }
        
        System.out.println(cnt);
    }
}