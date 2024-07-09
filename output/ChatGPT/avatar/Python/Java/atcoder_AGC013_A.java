import java.util.*;
import java.io.*;

public class atcoder_AGC013_A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        
        int N = Integer.parseInt(br.readLine());
        int[] A = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            A[i] = Integer.parseInt(st.nextToken());
        }
        
        List<Integer> B = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            if (i == 0 || A[i] != A[i-1]) {
                B.add(A[i]);
            }
        }
        
        N = B.size();
        int i = 1;
        int ans = 0;
        while (i < N - 1) {
            if ((B.get(i-1) < B.get(i) && B.get(i) > B.get(i+1)) || (B.get(i-1) > B.get(i) && B.get(i) < B.get(i+1))) {
                ans++;
                i++;
            }
            i++;
        }
        
        out.println(ans + 1);
        out.close();
    }
}