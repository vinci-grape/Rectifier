import java.io.*;
import java.util.*;

public class s579031873 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(" ");
        int N = Integer.parseInt(str[0]);
        int X = Integer.parseInt(str[1]);

        int ans = 0;
        int min = 1000000000;
        for (int i = 0; i < N; i++) {
            int tmp = Integer.parseInt(br.readLine());
            X -= tmp;
            ans++;
            if (tmp < min) min = tmp;
        }

        ans += X / min;

        System.out.println(ans);
    }
}