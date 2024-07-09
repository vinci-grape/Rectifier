public class codeforces_268_A {
    public int findDuplicates(int[] nums) {
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i]!= i + 1) {
                count++;
            }
        }
        return count;
    }
}