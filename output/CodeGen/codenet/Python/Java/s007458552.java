public class s007458552 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        String S = args[1];
        int[] C = new int[26];
        for (int i = 0; i < S.length(); i++) {
            C[S.charAt(i) - 'A']++;
        }
        int R = C['R'];
        if (R > n - C['R']) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}