import java.util.*;

public class atcoder_ABC171_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] nums = scanner.nextInt().split(" ");
        int k = Integer.parseInt(scanner.nextLine());
        int[] heap = new int[nums.length];
        for (int i = 0; i < heap.length; i++) {
            heap[i] = nums[i];
        }
        heapify(heap, heap.length - k);
        System.out.println(heap[heap.length - k]);
    }

    private static void heapify(int[] heap, int i, int heapSize) {
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