public class s013321508 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] L = new int[n];
        for (int i = 0; i < n; i++) {
            L[i] = in.nextInt();
        }
        Arrays.sort(L);
        int maxL = L[L.length - 1];
        int maxL_div2 = maxL / 2;
        int[] ans = new int[m];
        for (int i = 0; i < m; i++) {
            int max_L = maxL;
            if (max_L == 0) {
                break;
            }
            max_L /= 2;
            int itr = Arrays.binarySearch(L, max_L);
            if (itr < 0) {
                itr = -itr - 1;
            }
            L.add(itr, max_L);
            L.remove(L.length - 1);
            ans[i] = L.length;
        }
        long ans_sum = 0;
        for (int i = 0; i < ans.length; i++) {
            ans_sum += ans[i];
        }
        System.out.println(ans_sum);
    }
}