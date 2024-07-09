import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class atcoder_ABC172_D {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        long ans = 0;
        for (int i = 1; i <= N; i++) {
            ans += i * (N / i) * (N / i + 1) / 2;
        }
        System.out.println(ans);
    }
}