public class s593850729 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A = in.nextInt();
        int B = in.nextInt();
        int C = in.nextInt();
        int X = in.nextInt();
        int cnt = 0;
        for (int a = 0; a <= A; a++) {
            for (int b = 0; b <= B; b++) {
                for (int c = 0; c <= C; c++) {
                    int total = 500 * a + 100 * b + 50 * c;
                    if (total == X) cnt++;
                }
            }
        }
        System.out.println(cnt);
    }
}