public class s957164965 {
    public int[] twoSum(int[] numbers, int target) {
        int[] result = new int[2];
        if (numbers == null || numbers.length == 0) {
            return result;
        }
        Arrays.sort(numbers);
        for (int i = 0; i < numbers.length; i++) {
            int j = binarySearch(numbers, target - numbers[i]);
            if (j!= -1) {
                result[0] = i + 1;
                result[1] = j + 1;
                return result;
            }
        }
        return result;
    }

    private int binarySearch(int[] numbers, int target) {
        int low = 0;
        int high = numbers.length - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (numbers[mid] == target) {
                return mid;
            } else if (numbers[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
}