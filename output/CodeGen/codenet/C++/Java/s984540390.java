public class s984540390 {
    public int getSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        return sum;
    }
    public int getMax(int n) {
        int max = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                max = i;
            }
        }
        return max;
    }
    public int getMin(int n) {
        int min = 1;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                min = i;
            }
        }
        return min;
    }
    public int getSum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                sum += i;
            }
        }
        return sum;
    }
    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.getSum(10));
    }
}