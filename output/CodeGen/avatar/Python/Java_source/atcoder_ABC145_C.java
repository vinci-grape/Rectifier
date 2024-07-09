import java.util.*;
import java.io.*;

public class atcoder_ABC145_C {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        int N = Integer.parseInt(line);
        int[] x = new int[N];
        int[] y = new int[N];
        for (int i = 0; i < N; i++) {
            x[i] = Integer.parseInt(br.readLine());
            y[i] = Integer.parseInt(br.readLine());
        }
        int result = 0;
        for (int i = 0; i < N - 1; i++) {
            int f = i;
            int t = i + 1;
            int distance = (int) Math.sqrt((x[t] - x[f]) * (x[t] - x[f]) + (y[t] - y[f]) * (y[t] - y[f]));
            result += distance;
        }
        result /= N - 1;
        System.out.println(result);
    }
}