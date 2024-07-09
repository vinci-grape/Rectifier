public class s058944700 {
    public int findKthLargest(int[] nums, int k) {
        int[] heap = new int[k];
        for (int i = 0; i < k; i++) {
            heap[i] = nums[i];
        }
        for (int i = k; i < nums.length; i++) {
            int tmp = heap[0];
            heap[0] = nums[i];
            nums[i] = tmp;
            heapify(heap, k);
        }
        return heap[0];
    }
    
    private void heapify(int[] heap, int k) {
        for (int i = k / 2; i >= 1; i--) {
            heapify(heap, i);
        }
    }
}

'''