public class s023282516 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        in.close();
        
        // 後ろから解くかわりにすべての文字列を「左右反転」する
        reverse(S.toCharArray());
        for (int i = 0; i < 4; ++i) reverse(divide[i].toCharArray());
        
        // 端から切っていく
        boolean can = true;
        for (int i = 0; i < S.length();) {
            boolean can2 = false; // 4 個の文字列たちどれかで divide できるか
            for (int j = 0; j < 4; ++j) {
                String d = divide[j];
                if (S.substring(i, d.length()).equals(d)) { // d で divide できるか
                    can2 = true;
                    i += d.length(); // divide できたら i を進める
                }
            }
            if (!can2) { // divide できなかったら
                can = false;
                break;
            }
        }
        
        if (can) System.out.println("YES");
        else System.out.println("NO");
    }
}