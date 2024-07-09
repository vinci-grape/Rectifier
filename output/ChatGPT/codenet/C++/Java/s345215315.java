import java.util.*;

public class s345215315 {
    
    static int INF = (int) 1e9;
    static int ans = INF;
    static int h = 19, w = 15;
    static int[] dx = {0, 1, 0, -1, 1, 1, -1, -1};
    static int[] dy = {1, 0, -1, 0, 1, -1, 1, -1};
    static String[] s = new String[19];
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < h; i++) {
            s[i] = sc.next();
        }
        int sx = 0, sy = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (s[i].charAt(j) == 'O') {
                    sx = i;
                    sy = j;
                    s[i] = s[i].substring(0, j) + '.' + s[i].substring(j + 1);
                }
            }
        }
        dfs(sx, sy, 0);
        if (ans == INF) {
            System.out.println(-1);
        } else {
            System.out.println(ans);
        }
    }
    
    public static void dfs(int x, int y, int cnt) {
        if (cnt > 20) {
            return;
        }
        if (x == h - 1) {
            ans = Math.min(ans, cnt);
            return;
        }
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
                continue;
            }
            if (s[nx].charAt(ny) != 'X') {
                continue;
            }
            boolean c = true;
            while (c && s[nx].charAt(ny) == 'X') {
                s[nx] = s[nx].substring(0, ny) + '.' + s[nx].substring(ny + 1);
                nx += dx[i];
                ny += dy[i];
                if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
                    if (nx >= h) {
                        ans = Math.min(ans, cnt + 1);
                    }
                    c = false;
                }
            }
            if (c) {
                dfs(nx, ny, cnt + 1);
            }
            while (nx != x || ny != y) {
                nx -= dx[i];
                ny -= dy[i];
                s[nx] = s[nx].substring(0, ny) + 'X' + s[nx].substring(ny + 1);
            }
            s[x] = s[x].substring(0, y) + '.' + s[x].substring(y + 1);
        }
    }
}