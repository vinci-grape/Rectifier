import java.util.Scanner;

public class s102850254 {
    static int d;
    static String[] map;
    static int n;

    public static void visit() {
        int[] dx = {0, 1, 0, -1};
        int[] dy = {-1, 0, 1, 0};
        int sum, flg = 0;
        int x = 2, y = n;
        char[] row = map[y].toCharArray();
        row[x] = ' ';
        map[y] = new String(row);
        int[] ab = {2, 2, 2, 2};

        while (true) {
            sum = 0;
            while (true) {
                if (map[y + dy[flg] * 2].charAt(x + dx[flg] * 2) != '#' && map[y + dy[flg]].charAt(x + dx[flg]) != ' ') {
                    flg++;
                    break;
                }

                row = map[y + dy[flg]].toCharArray();
                row[x + dx[flg]] = ' ';
                map[y + dy[flg]] = new String(row);
                y = y + dy[flg];
                x = x + dx[flg];
                sum++;
            }
            if (flg == 4) flg = 0;
            if (sum == 0) break;
            ab[0] = ab[1];
            ab[1] = ab[2];
            ab[2] = sum;
            if (ab[0] == 1 && ab[2] == 1 && ab[1] == 1) break;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        d = sc.nextInt();

        for (int l = 0; l < d; l++) {
            n = sc.nextInt();

            if (n == 1) {
                System.out.println("#");
                if (l != d - 1) System.out.println();
                continue;
            }

            map = new String[n + 2];
            for (int i = 0; i <= n + 1; i++) {
                StringBuilder sb = new StringBuilder();
                for (int j = 0; j <= n + 1; j++) {
                    sb.append('#');
                    if (i == 0 || j == 0 || i == n + 1 || j == n + 1) sb.setCharAt(j, '.');
                }
                map[i] = sb.toString();
            }

            visit();

            for (int i = 1; i <= n; i++) {
                System.out.println(map[i].substring(1, map[i].length() - 1));
            }
            if (l != d - 1)
                System.out.println();

        }
    }
}