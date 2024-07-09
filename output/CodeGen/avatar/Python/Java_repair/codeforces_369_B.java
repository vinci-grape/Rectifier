import java.util.*;

public class codeforces_369_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int rowIndex = Integer.parseInt(scanner.nextLine());
        System.out.println(getRow(rowIndex));
    }
    public static int[] getRow(int rowIndex) {
        int[] ans = new int[rowIndex + 1];
        for (int i = 0; i < rowIndex + 1; i++) {
            int t = i;
            int[] nums = new int[i + 1];
            for (int j = 0; j < i + 1; j++) {
                if (j >= t) {
                    nums[j] = t / j + 1;
                } else {
                    nums[j] = t / j;
                }
                t = t % j;
            }
            ans[i] = nums[i];
        }
        return ans;
    }
}