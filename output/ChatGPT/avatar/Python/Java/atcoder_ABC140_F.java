import java.util.*;
import java.io.*;

public class atcoder_ABC140_F {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        int[] nextIntArray(int n) {
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = nextInt();
            }
            return arr;
        }
    }

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        int N = sc.nextInt();
        int[] S = sc.nextIntArray(N);
        Arrays.sort(S);

        boolean[] flag = new boolean[S.length];
        Arrays.fill(flag, true);

        List<Integer> cur = new ArrayList<>();
        cur.add(S[0]);
        flag[0] = false;

        for (int i = 0; i < N; i++) {
            int j = 0;
            int jM = cur.size();
            for (int k = 0; k < S.length; k++) {
                if (flag[k] && S[k] < cur.get(j)) {
                    cur.add(S[k]);
                    j++;
                    flag[k] = false;
                    if (j == jM) {
                        break;
                    }
                }
            }

            if (j != jM) {
                System.out.println("No");
                return;
            }

            Collections.sort(cur, Collections.reverseOrder());
        }

        System.out.println("Yes");
    }
}