public class s813548165 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String S = in.next();
        String T = in.next();
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sb.append(S.charAt(i));
            sb.append(T.charAt(i));
        }
        System.out.println(sb.toString());
    }
}