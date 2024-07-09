import java.util.Scanner;

public class s331817031 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int h = scanner.nextInt();
        int w = scanner.nextInt();
        scanner.nextLine(); // consume the newline character

        char[][] l = new char[h][w];
        for (int i = 0; i < h; i++) {
            String row = scanner.nextLine();
            for (int j = 0; j < w; j++) {
                l[i][j] = row.charAt(j);
            }
        }

        int tmp = 0;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (l[i][j] == '#') {
                    if (j < tmp) {
                        System.out.println("Impossible");
                        System.exit(0);
                    } else {
                        tmp = j;
                    }
                }
            }
        }

        System.out.println("Possible");
    }
}