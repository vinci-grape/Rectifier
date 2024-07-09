public class atcoder_ABC134_E {
    public int[] searchRange(int[] A, int target) {
        int[] ans = new int[2];
        int low = 0, high = A.length - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (A[mid] < target) {
                low = mid + 1;
            } else if (A[mid] > target) {
                high = mid - 1;
            } else {
                ans[0] = mid;
                ans[1] = mid;
                break;
            }
        }
        return ans;
    }
}