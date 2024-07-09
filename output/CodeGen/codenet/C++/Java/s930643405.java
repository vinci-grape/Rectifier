public class s930643405 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] d = new int[10];
        for (int i = 0; i < k; i++) {
            d[in.nextInt()] = 1;
        }
        while (true) {
            int x = n;
            boolean hantei = true;
            while (x > 0) {
                if (d[x % 10]) {
                    hantei = false;
                    break;
                }
                x /= 10;
            }
            if (hantei) {
                System.out.println(n);
                break;
            }
            n++;
        }
    }
}