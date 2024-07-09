public class s817205687 {
    public int findLcm(int[] A) {
        int lcm = 1;
        for (int a : A) {
            lcm = lcm(lcm, a);
        }
        return lcm;
    }

    private int lcm(int a, int b) {
        return a * b / gcd(a, b);
    }

    private int gcd(int a, int b) {
        return b == 0? a : gcd(b, a % b);
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        System.out.println(s.findLcm(new int[]{2, 3, 4}));
    }
}