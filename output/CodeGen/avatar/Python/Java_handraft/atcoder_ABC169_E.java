public class atcoder_ABC169_E {
    public int[] twoSum(int[] numbers, int target) {
        int[] result = new int[2];
        if (numbers == null || numbers.length < 2) {
            return result;
        }
        Arrays.sort(numbers);
        int low = 0;
        int high = numbers.length - 1;
        while (low < high) {
            int sum = numbers[low] + numbers[high];
            if (sum == target) {
                result[0] = low + 1;
                result[1] = high + 1;
                return result;
            } else if (sum < target) {
                low++;
            } else {
                high--;
            }
        }
        return result;
    }
}