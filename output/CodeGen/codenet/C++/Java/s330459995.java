public class s330459995 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int W = in.nextInt();
        int H = in.nextInt();
        int x = in.nextInt();
        int y = in.nextInt();
        int r = in.nextInt();
        if (x - r < 0 || x + r > W || y - r < 0 || y + r > H) {
            System.out.println("No");
        } else if (x - r >= 0 && x + r <= W && y - r >= 0 && y + r <= W) {
            System.out.println("Yes");
        }
    }
}