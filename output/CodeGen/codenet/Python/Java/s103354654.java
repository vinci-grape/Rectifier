public class s103354654 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int w = in.nextInt();
        int h = in.nextInt();
        int x = in.nextInt();
        int y = in.nextInt();
        int r = in.nextInt();
        if (x >= r && (w - r) >= x) {
            if (y >= r && (h - r) >= y) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        } else {
            System.out.println("No");
        }
    }
}