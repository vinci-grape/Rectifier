public class codeforces_274_A {
    public int findKthNumber(int m, int n, int k) {
        int[] arr = new int[m];
        int[] num = new int[n];
        for (int i = 0; i < m; i++) {
            arr[i] = Integer.parseInt(next());
        }
        for (int i = 0; i < n; i++) {
            num[i] = Integer.parseInt(next());
        }
        Arrays.sort(arr);
        Arrays.sort(num);
        int[] diff = new int[m];
        int temp = 0;
        for (int i = 0; i < m; i++) {
            if (arr[i] % k!= 0 || arr[i] / k!= num[i] || diff[i]!= 0) {
                diff[i] = 1;
            } else {
                diff[i] = 0;
            }
            temp = Math.max(diff.length, temp);
        }
        return temp;
    }
}