import java.util.*;
public class s102850254 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d = sc.nextInt();
        for (int l = 0; l < d; l++) {
            int n = sc.nextInt();
            if (n == 1) {
                System.out.println("#");
                if (l != d - 1)
                    System.out.println();
                continue;
            }
            String[] map = new String[n + 2];
            for (int i = 0; i <= n + 1; i++) {
                map[i] = "#";
                for (int j = 0; j <= n + 1; j++) {
                    if (i == 0 || j == 0 || i == n + 1 || j == n + 1)
                        map[i] = map[i].substring(0, j) + "." + map[i].substring(j + 1);
                }
            }
            visit(map);
            for (int i = 1; i <= n; i++) {
                System.out.println(map[i]);
            }
            if (l != d - 1)
                System.out.println();
        }
    }
    public static void visit(String[] map) {
        int[] dx = { 0, 1, 0, -1 };
        int[] dy = { -1, 0, 1, 0 };
        int sum, flg = 0;
        int x = 2, y = map.length - 1;
        map[y] = map[y].substring(0, x) + " " + map[y].substring(x + 1);
        int[] ab = { 2, 2, 2, 2 };
        while (true) {
            sum = 0;
            while (true) {
                if (map[y + dy[flg] * 2].charAt(x + dx[flg] * 2) != '#' && map[y + dy[flg]].charAt(x + dx[flg]) != ' ') {
                    flg++;
                    // System.out.println(sum);
                    break;
                }
                map[y + dy[flg]] = map[y + dy[flg]].substring(0, x + dx[flg]) + " " + map[y + dy[flg]].substring(x + dx[flg] + 1);
                y = y + dy[flg];
                x = x + dx[flg];
                sum++;
            }
            if (flg == 4)
                flg = 0;
            if (sum == 0)
                break;
            ab[0] = ab[1];
            ab[1] = ab[2];
            ab[2] = sum;
            if (ab[0] == 1 && ab[2] == 1 && ab[1] == 1)
                break;
        }
    }
}