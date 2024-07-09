public class s538657784 {
    public int sqrt(int x) {
        int low = 0;
        int high = x;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (mid * mid == x) {
                return mid;
            } else if (mid * mid < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
}