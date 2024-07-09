public class s353737529 {
    public static void main(String[] args) {
        int n;
        StringBuilder sb = new StringBuilder();
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        while (n!= 0) {
            if (n % 2 == 0) {
                sb.append('0');
            } else {
                sb.append('1');
            }
            n -= abs(n % 2);
            n /= -2;
        }
        reverse(sb.toString().toCharArray());
        System.out.println(sb.toString());
    }
}