import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class s124725275 {
    private static final int INF = 2147483648;
    private static final int[][] DIR = {{-2, 0}, {-1, 0}, {0, 0}, {1, 0}, {2, 0}, {-2, 1}, {-1, 1}, {0, 1}, {1, 1}, {2, 1}, {-2, -1}, {-1, -1}, {0, -1}, {1, -1}, {2, -1}};
    private static int H, W;
    private static int[][] S;
    private static int[][] D;
    private static int[][][] memo;
    private static int si, sj, ti, tj;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        H = Integer.parseInt(st.nextToken());
        W = Integer.parseInt(st.nextToken());
        si = Integer.parseInt(st.nextToken());
        sj = Integer.parseInt(st.nextToken());
        ti = Integer.parseInt(st.nextToken());
        tj = Integer.parseInt(st.nextToken());
        S = new int[H][W];
        D = new int[H][W];
        memo = new int[H][W][2];
        for (int i = 0; i < H; i++) {
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < W; j++) {
                S[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        System.out.println(dijkstra(si, sj, ti, tj));
    }

    private static int dijkstra(int si, int sj, int ti, int tj) {
        Arrays.fill(D[0], INF);
        D[si][sj