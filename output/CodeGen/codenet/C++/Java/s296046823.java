public class s296046823 {
    public int findKthLargest(int[] nums, int k) {
        int n = nums.length;
        int[] heap = new int[n];
        for (int i = 0; i < n; i++) {
            heap[i] = nums[i];
        }
        for (int i = n / 2; i >= 0; i--) {
            heapify(heap, i, n);
        }
        for (int i = n - 1; i > 0; i--) {
            int temp = heap[0];
            heap[0] = heap[i];
            heap[i] = temp;
            heapify(heap, 0, i);
        }
        return heap[k - 1];
    }

    private void heapify(int[] heap, int i, int n) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest = i;
        if (l < n && heap[l] > heap[largest]) largest = l;
        if (r < n && heap[r] > heap[largest]) largest = r;
        if (largest!= i) {
            int temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;
            heapify(heap, largest, n);
        }
    }
}