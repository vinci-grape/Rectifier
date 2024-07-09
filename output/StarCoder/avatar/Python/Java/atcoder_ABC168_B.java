public class atcoder_ABC168_B {
    public static void main(String[] args) {
        int K = Integer.parseInt(args[0]);
        String S = args[1];
        if (S.length() <= K) {
            System.out.println(S);
        } else {
            System.out.println(S.substring(0, K) + "...");
        }
    }
}
