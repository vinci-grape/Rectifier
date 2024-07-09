public class s704354119 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] str = in.nextLine().split(" ");
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += Integer.parseInt(str[i]);
            if (max < Integer.parseInt(str[i])) {
                max = Integer.parseInt(str[i]);
            }
            if (min > Integer.parseInt(str[i])) {
                min = Integer.parseInt(str[i]);
            }
        }
        System.out.println(min + " " + max + " " + sum);
    }
}