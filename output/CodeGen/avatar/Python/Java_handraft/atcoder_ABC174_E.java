import java.util.*;

public class atcoder_ABC174_E {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        System.out.println(findKthLargest(arr, k));
    }
    public static int findKthLargest(int[] nums, int k) {
        int n = nums.length;
        int[] heap = new int[n];
        for (int i = 0; i < n; i++) {
            heap[i] = nums[i];
        }
        for (int i = n / 2; i >= 0; i--) {
            siftDown(heap, i, n - 1);
        }
        for (int i = n - 1; i > 0; i--) {
            int temp = heap[0];
            heap[0] = heap[i];
            heap[i] = temp;
            siftDown(heap, 0, i - 1);
        }
        return heap[k - 1];
    }
    private static void siftDown(int[] heap, int i, int n) {
        while (i * 2 + 1 < n) {
            int j = i * 2 + 1;
            if (j + 1 < n && heap[j] < heap[j + 1]) {
                j++;
            }
            if (heap[i] >= heap[j]) {
                break;
            }
            int temp = heap[i];
            heap[i] = heap[j];
            heap[j] = temp;
            i = j;
        }
    }
}