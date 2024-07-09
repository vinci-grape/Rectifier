import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

public class s269975433 {

    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int Q = Integer.parseInt(st.nextToken());

        List<int[]> Q_groups = new ArrayList<>();
        for (int i = 0; i < Q; i++) {
            st = new StringTokenizer(br.readLine());
            int[] q = new int[4];
            q[0] = Integer.parseInt(st.nextToken());
            q[1] = Integer.parseInt(st.nextToken());
            q[2] = Integer.parseInt(st.nextToken());
            q[3] = Integer.parseInt(st.nextToken());
            Q_groups.add(q);
        }

        int max_score = 0;
        for (int[] p : combinations_with_replacement(N, M)) {
            int temp_score = 0;
            for (int[] q : Q_groups) {
                if (p[q[1] - 1] - p[q[0] - 1] == q[2]) {
                    temp_score += q[3];
                }
            }
            max_score = Math.max(max_score, temp_score);
        }

        System.out.println(max_score);
    }

    public static List<int[]> combinations_with_replacement(int N, int M) {
        List<int[]> result = new ArrayList<>();
        int[] p = new int[N];
        Arrays.fill(p, 1);
        result.add(p);

        while (true) {
            int i = N - 1;
            while (i >= 0 && p[i] == M) {
                i--;
            }
            if (i < 0) {
                break;
            }
            p[i]++;
            for (int j = i + 1; j < N; j++) {
                p[j] = p[j - 1] + 1;
            }
            result.add(p.clone());
        }

        return result;
    }
}