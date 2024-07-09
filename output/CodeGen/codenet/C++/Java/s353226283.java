public class s353226283 {
    public int findKthLargest(int[] nums, int k) {
        int n = nums.length;
        if (n == 0) return 0;
        if (k > n) return 0;
        if (k == n) return nums[n - 1];
        int[] heap = new int[n];
        for (int i = 0; i < n; i++) {
            heap[i] = nums[i];
        }
        for (int i = n / 2; i >= 0; i--) {
            heapify(heap, i, n);
        }
        for (int i = n - 1; i >= k - 1; i--) {
            heap[0] = heap[i];
            heap[i] = nums[i];
            heapify(heap, 0, i);
        }
        return heap[k - 1];
    }
    
    private void heapify(int[] heap, int i, int n) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest = i;
        if (l < n && heap[l] > heap[i]) largest = l;
        if (r < n && heap[r] > heap[largest]) largest = r;
        if (largest!= i) {
            int temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;
            heapify(heap, largest, n);
        }
    }
}