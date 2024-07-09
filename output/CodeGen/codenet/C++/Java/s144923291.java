public class s144923291 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int h = in.nextInt();
        int w = in.nextInt();
        String t = in.next();
        String s = "snuke";
        int[][] a = new int[h][w];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                a[i][j] = in.nextInt();
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (a[i][j] == 1) {
                    if (s.charAt(j) == 'A') {
                        System.out.println((char) ('A' + j) + (i + 1));
                    }
                }
            }
        }
    }
}