import java.util.*;
import java.io.*;

public class s124725275 {
    static final int INF = (int) 1e9 + 7;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int H = Integer.parseInt(st.nextToken());
        int W = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        int si = Integer.parseInt(st.nextToken()) - 1;
        int sj = Integer.parseInt(st.nextToken()) - 1;

        st = new StringTokenizer(br.readLine());
        int ti = Integer.parseInt(st.nextToken()) - 1;
        int tj = Integer.parseInt(st.nextToken()) - 1;

        int[][] S = new int[H][W];
        for (int i = 0; i < H; i++) {
            String row = br.readLine();
            for (int j = 0; j < W; j++) {
                if (row.charAt(j) == '#') {
                    S[i][j] = 1;
                }
            }
        }

        int[][] D = new int[H][W];
        for (int i = 0; i < H; i++) {
            Arrays.fill(D[i], -1);
        }

        Deque<int[]> queue = new ArrayDeque<>();
        queue.add(new int[]{0, si, sj});

        while (!queue.isEmpty()) {
            int[] curr = queue.poll();

            int c = curr[0];
            int i = curr[1];
            int j = curr[2];

            if (D[i][j] != -1) {
                continue;
            }

            D[i][j] = c;

            int[][] directions = {{-2, -1}, {-2, 0}, {-2, 1}, {-1, -2}, {-1, -1}, {-1, 0}, {-1, 1}, {-1, 2},
                    {0, -2}, {0, -1}, {0, 1}, {0, 2}, {1, -2}, {1, -1}, {1, 0}, {1, 1}, {1, 2},
                    {2, -1}, {2, 0}, {2, 1}};

            for (int[] dir : directions) {
                int ni = i + dir[0];
                int nj = j + dir[1];

                if (ni < 0 || ni >= H || nj < 0 || nj >= W || D[ni][nj] != -1 || (ni == 0 && nj == 0) || S[ni][nj] == 1) {
                    continue;
                }

                if ((dir[0] == 0 && Math.abs(dir[1]) == 1) || (dir[1] == 0 && Math.abs(dir[0]) == 1)) {
                    queue.addFirst(new int[]{c, ni, nj});
                } else {
                    queue.add(new int[]{c + 1, ni, nj});
                }
            }
        }

        System.out.println(D[ti][tj]);
    }
}