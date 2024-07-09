import java.util.Scanner;

public class s557795702 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        long ans = mergesort(a, 0, n);
        System.out.println(ans);
    }

    private static long merge(int[] a, int left, int mid, int right) {
        int[] L = new int[mid - left];
        int[] R = new int[right - mid];
        long cnt = 0;
        for (int i = 0; i < L.length; i++) {
            L[i] = a[left + i];
        }
        for (int i = 0; i < R.length; i++) {
            R[i] = a[mid + i];
        }
        L[L.length] = R[R.length] = Integer.MAX_VALUE;
        int i = 0, j = 0;
        for (int k = left; k < right; k++) {
            if (L[i] <= R[j]) {
                a[k] = L[i++];
            } else {
                a[k] = R[j++];
                cnt += L.length - i;
            }
        }
        return cnt;
    }

    private static long mergesort(int[] a, int left, int right) {
        if (left + 1 < right) {
            int mid = (left + right) / 2;
            long v1 = mergesort(a, left, mid);
            long v2 = mergesort(a, mid, right);
            long v3 = merge(a, left, mid, right);
            return v1 + v2 + v3;
        }
        return 0;
    }
}