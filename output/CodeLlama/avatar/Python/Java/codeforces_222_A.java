import java.util.Scanner;
public class codeforces_222_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        boolean allSame = true;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[0]) {
                allSame = false;
                break;
            }
        }
        if (allSame) {
            System.out.println(0);
            return;
        }
        if (k == 1) {
            System.out.println(-1);
            return;
        }
        if (!allSame(arr, k - 1, n - 1)) {
            System.out.println(-1);
            return;
        }
        int target = arr[n - 1];
        int[] toDelete = new int[k - 1];
        for (int i = 0; i < k - 1; i++) {
            toDelete[i] = arr[i];
        }
        while (toDelete.length > 0 && toDelete[toDelete.length - 1] == target) {
            toDelete = java.util.Arrays.copyOf(toDelete, toDelete.length - 1);
        }
        System.out.println(toDelete.length);
    }
    public static boolean allSame(int[] arr, int start, int end) {
        for (int i = start + 1; i <= end; i++) {
            if (arr[i] != arr[start]) {
                return false;
            }
        }
        return true;
    }
}