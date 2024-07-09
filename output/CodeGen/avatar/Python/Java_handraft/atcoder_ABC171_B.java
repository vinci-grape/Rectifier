public class atcoder_ABC171_B {
    public int findKthLargest(int[] nums, int k) {
        int[] heap = new int[nums.length];
        for (int i = 0; i < heap.length; i++) {
            heap[i] = nums[i];
        }
        heapify(heap, heap.length - k);
        return heap[heap.length - k];
    }

    private void heapify(int[] heap, int heapSize) {
        for (int i = heapSize / 2; i >= 0; i--) {
            heapify(heap, i, heapSize);
        }
    }

    private void heapify(int[] heap, int i, int heapSize) {
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        int largest = i;
        if (left < heapSize && heap[left] > heap[i]) {
            largest = left;
        }
        if (right < heapSize && heap[right] > heap[largest]) {
            largest = right;
        }
        if (largest!= i) {
            int temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;
            heapify(heap, largest, heapSize);
        }
    }
}