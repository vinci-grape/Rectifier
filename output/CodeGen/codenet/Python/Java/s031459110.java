public class s031459110 {
    public int findMinStep(String board, String hand) {
        int num_w = hand.chars().filter(c -> c == 'W').count();
        int num_r = board.length() - num_w;
        char[] comp = new char[num_r];
        for (int i = 0; i < num_r; i++) {
            comp[i] = board.charAt(i);
        }
        int ans = 0;
        for (int i = 0; i < num_r; i++) {
            if (hand.charAt(i)!= comp[i]) {
                ans += 1;
            }
        }
        ans = Math.min(num_w, num_r, ans);
        return ans;
    }
}