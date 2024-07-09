public class s761121328 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] A = new int[n];
        for (int A_i = 0; A_i < n; A_i++) {
            A[A_i] = in.nextInt();
        }
        int s = A[0] ^ A[1];
        for (int i = 2; i < n; i++) {
            s = s ^ A[i];
        }
        int[] B = new int[n];
        for (int i = 0; i < n; i++) {
            B[i] = s ^ A[i];
        }
        StringBuilder sb = new StringBuilder();
        for (int B_i : B) {
            sb.append(B_i);
            sb.append(" ");
        }
        sb.setLength(sb.length() - 1);
        System.out.println(sb.toString());
    }
}