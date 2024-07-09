import java.io.*;
import java.util.*;

public class s384319383 {
   public static void main(String[] args) throws IOException {
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       String s;
       while ((s = br.readLine())!= null) {
           int n = Integer.parseInt(s);
           char[] c = br.readLine().toCharArray();
           int[] cnt = new int[26];
           for (int i = 0; i < n; ++i) {
               cnt[c[i] - 'a']++;
           }
           int ans = cnt[0];
           for (int i = 1; i < 26; ++i) {
               ans *= cnt[i];
               ans %= MOD;
           }
           System.out.println(ans - 1);
       }
   }
}