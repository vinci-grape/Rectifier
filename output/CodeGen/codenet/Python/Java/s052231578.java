public class s052231578 {
    public static void main(String[] args) {
        int n = Integer.parseInt(args[0]);
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
        int target = Integer.parseInt(args[1]);
        int[] ans = new int[2];
        int idx = Arrays.binarySearch(arr, target);
        if (idx < 0) {
            idx = -idx - 1;
        }
        ans[0] = arr[idx];
        ans[1] = arr[idx + 1];
        for (int i = 0; i < 2; i++) {
            System.out.println(ans[i]);
        }
    }
}