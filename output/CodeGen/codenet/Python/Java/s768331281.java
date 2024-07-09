public class s768331281 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String[] S = new String[n];
        for (int S_i = 0; S_i < n; S_i++) {
            S[S_i] = in.next();
        }
        int l = in.nextInt();
        String[] S1 = new String[l];
        for (int S1_i = 0; S1_i < l; S1_i++) {
            S1[S1_i] = in.next();
        }
        Arrays.sort(S);
        Arrays.sort(S1);
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < n; i++) {
            sb.append(S[i]);
        }
        for (int i = 0; i < l; i++) {
            sb.append(S1[i]);
        }
        System.out.println(sb.toString());
    }
}