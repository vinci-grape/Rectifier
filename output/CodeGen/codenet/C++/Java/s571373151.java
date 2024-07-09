public class s571373151 {
    public int findMinStep(int n, int m) {
        int[] foods = new int[m];
        for (int i = 0; i < n; i++) {
            int k = Integer.parseInt(scanner.nextLine());
            for (int j = 0; j < k; j++) {
                int temp = Integer.parseInt(scanner.nextLine());
                temp--;
                foods[temp]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++) {
            if (foods[i] == n) {
                ans++;
            }
        }
        return ans;
    }
}