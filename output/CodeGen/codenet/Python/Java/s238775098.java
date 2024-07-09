public class s238775098 {
    public int getMoneyAmount(int n) {
        int res = 0;
        for (int i = 0; i < n; i++) {
            String[] str = input().split();
            if (str[1].equals("BTC")) {
                res += Integer.parseInt(str[0]) * 380000;
            } else {
                res += Integer.parseInt(str[0]);
            }
        }
        return res;
    }
}