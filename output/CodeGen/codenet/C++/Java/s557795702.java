public class s557795702 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int[] L = new int[n/2];
        int[] R = new int[n/2];
        int l = 0, r = n-1;
        int cnt = 0;
        while (l <= r) {
            if (a[l] <= a[r]) {
                L[cnt] = a[l];
                l++;
            } else {
                R[cnt] = a[r];
                r--;
                cnt++;
            }
        }
        for (int i = 0; i < cnt; i++) {
            a[l+i] = L[i];
        }
        for (int i = 0; i < cnt; i++) {
            a[r-i] = R[i];
        }
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += cnt;
        }
        System.out.println(ans);
    }
}