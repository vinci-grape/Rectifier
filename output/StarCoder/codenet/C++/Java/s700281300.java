import java.util.*;
import java.io.*;

public class s700281300 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        for (int i = 0; i < n; i++) {
            String s = in.next();

            Set<String> st = new HashSet<String>();
            st.add(s);

            for (int j = 1; j < s.length(); j++) {
                String res = "";
                for (int k = 0; k < j; k++) {
                    res += s.charAt(k);
                }

                String res2 = "";
                for (int k = j; k < s.length(); k++) {
                    res2 += s.charAt(k);
                }

                String t = res;
                StringBuilder sb = new StringBuilder(t);
                sb.reverse();
                t = sb.toString();

                String t2 = res2;
                StringBuilder sb2 = new StringBuilder(t2);
                sb2.reverse();
                t2 = sb2.toString();

                st.add(t + t2);
                st.add(t2 + t);

                st.add(t + res2);
                st.add(res2 + t);

                st.add(res + t2);
                st.add(t2 + res);

                st.add(res + res2);
                st.add(res2 + res);
            }

            System.out.println(st.size());
        }
    }
}