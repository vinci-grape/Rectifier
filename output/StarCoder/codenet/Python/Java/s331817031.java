import java.util.*;

public class s331817031 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        sc.close();

        String[][] l = new String[h][w];
        for (int i = 0; i < h; i++) {
            String[] a = sc.next().split("");
            for (int j = 0; j < w; j++) {
                l[i][j] = a[j];
            }
        }

        int tmp = 0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (l[i][j].equals("#")) {
                    if (j < tmp) {
                        System.out.println("Impossible");
                        return;
                    } else {
                        tmp = j;
                    }
                }
            }
        }

        System.out.println("Possible");
    }
}