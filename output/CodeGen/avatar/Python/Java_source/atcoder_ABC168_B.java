public class atcoder_ABC168_B {
    public static void main(String[] args) {
        int K = Integer.parseInt(args[0]);
        String S = args[1];
        if (S.length() <= K) {
            return S;
        }
        return S.substring(0, K) + "...";
    }
}