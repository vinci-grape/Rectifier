import java.io.*;
import java.util.*;

public class s878873709 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        Set<Integer> s = new HashSet<>(Arrays.asList(1, 2, 4, 8, 16, 32, 64));
        int ans = 0;

        for (int i = 1; i <= N; i++) {
            if (s.contains(i)) {
                ans = i;
            }
        }

        System.out.println(ans);
    }
}