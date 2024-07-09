import java.util.*;
import java.io.*;

public class s700281300 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        for (int i = 0; i < n; i++) {
            String s = br.readLine();

            Set<String> set = new HashSet<>();
            set.add(s);

            for (int j = 1; j < s.length(); j++) {
                String res = s.substring(0, j);
                String res2 = s.substring(j);

                String t = res;
                StringBuilder sb = new StringBuilder(res);
                sb.reverse();
                String t2 = res2;
                StringBuilder sb2 = new StringBuilder(res2);
                sb2.reverse();

                set.add(t + t2);
                set.add(t2 + t);

                set.add(t + sb2.toString());
                set.add(sb2.toString() + t);

                set.add(sb.toString() + t2);
                set.add(t2 + sb.toString());

                set.add(sb.toString() + sb2.toString());
                set.add(sb2.toString() + sb.toString());
            }

            System.out.println(set.size());
        }
    }
}