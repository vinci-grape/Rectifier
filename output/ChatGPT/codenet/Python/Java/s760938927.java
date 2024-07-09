import java.util.Scanner;

public class s760938927 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int h = scanner.nextInt();
        int w = scanner.nextInt();
        int ka = scanner.nextInt();
        char[][] mat = new char[h][w];
        for (int i = 0; i < h; i++) {
            String row = scanner.next();
            for (int j = 0; j < w; j++) {
                mat[i][j] = row.charAt(j);
            }
        }
        int ans = 0;
        for (int i = 0; i < Math.pow(2, h + w); i++) {
            String b = Integer.toBinaryString(i);
            while (b.length() < h + w) {
                b = "0" + b;
            }
            String rs = b.substring(0, h);
            String cs = b.substring(h);
            int ct = 0;
            for (int l = 0; l < h; l++) {
                for (int k = 0; k < w; k++) {
                    if (mat[l][k] == '#' && rs.charAt(l) == '0' && cs.charAt(k) == '0') {
                        ct++;
                    }
                }
            }
            if (ct == ka) {
                ans++;
            }
        }
        System.out.println(ans);
    }
}