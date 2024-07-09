public class s992338735 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int s = in.nextInt();
        int sum = 0;
        int max = -1;
        int min = 1001;
        for (int i = 0; i < n; i++) {
            sum += in.nextInt();
            if (s > max) max = s;
            if (s < min) min = s;
        }
        System.out.println((sum - max - min) / (n - 2));
    }
}