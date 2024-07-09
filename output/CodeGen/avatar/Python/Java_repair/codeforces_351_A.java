import java.util.*;

public class codeforces_351_A {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        int o = 2 * n1 - n2;
        int[] arr = new int[n1 + n2];
        for (int i = 0; i < n1; i++) {
            arr[i] = nums1[i];
        }
        for (int i = 0; i < n2; i++) {
            arr[i + n1] = nums2[i];
        }
        Arrays.sort(arr);
        int mid = arr.length / 2;
        if (arr.length % 2 == 1) {
            return arr[mid];
        } else {
            return (arr[mid - 1] + arr[mid]) / 2.0;
        }
    }
}