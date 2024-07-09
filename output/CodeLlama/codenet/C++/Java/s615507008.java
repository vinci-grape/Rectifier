import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class s615507008 {

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(in.readLine());
        List<Integer> T = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            T.add(Integer.parseInt(in.readLine()));
        }
        int M = Integer.parseInt(in.readLine());
        List<Integer> P = new ArrayList<>();
        List<Integer> X = new ArrayList<>();
        for (int i = 0; i < M; i++) {
            String[] line = in.readLine().split(" ");
            P.add(Integer.parseInt(line[0]));
            X.add(Integer.parseInt(line[1]));
        }
        solve(N, T, M, P, X);
    }

    public static void solve(int N, List<Integer> T, int M, List<Integer> P, List<Integer> X) {
        for (int i = 0; i < M; i++) {
            int ans = 0;
            for (int j = 0; j < N; j++) {
                if (j == P.get(i) - 1) ans += X.get(i);
                else ans += T.get(j);
            }
            System.out.println(ans);
        }
    }
}