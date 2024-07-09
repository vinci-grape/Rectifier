import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class s466967233 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        int[] A = new int[N + 1];
        int[] B = new int[200100];
        int now = 1;
        int cnt = 0;
        st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= N; i++) {
            A[i] = Integer.parseInt(st.nextToken());
        }
        for (int i = 0; i < 200100; i++) {
            B[i] = -1;
        }
        //途中でどっかに合流したら抜ける
        int j;
        B[1] = 0;
        for (j = 1; j <= K; j++) {
            //System.out.println(now + " -> " + A[now]);
            now = A[now];
            if (B[now] == -1) {
                //System.out.println("未到達だった");
                B[now] = j;
            } else {
                //System.out.println("到達済みだった");
                //System.out.println("B[now] = " + B[now]);
                cnt = j;
                //System.out.println("cnt = " + cnt);
                break;
            }
        }
        if (j < K) {
            int tmp;
            tmp = (K - B[now]) % (cnt - B[now]);
            //System.out.println("あと " + tmp + "回移動すればいい");
            //B[now]からtmp回ワープしたところが終着点
            for (int j = 0; j < tmp; j++) {
                now = A[now];
            }
        }
        System.out.println(now);
    }
}