public class codeforces_55_B {
    public static void rememberTheNumber(int[] nums, int i, char[] operations, int[] ans) {
        if(i >= 3) {
            return;
        }
        for(int j=0; j<4; j++) {
            for(int k=j+1; k<4; k++) {
                if(nums[j] != -1 && nums[k] != -1) {
                    int s = nums[j];
                    nums[j] = -1;
                    int t = nums[k];
                    if(operations[i] == '+') {
                        nums[k] = s + t;
                    }
                    else if(operations[i] == '*') {
                        nums[k] = s * t;
                    }
                    if(i == 2 && nums[k] < ans[0]) {
                        ans[0] = nums[k];
                    }
                    rememberTheNumber(nums, i+1, operations, ans);
                    nums[j] = s;
                    nums[k] = t;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] nums = new int[4];
        char[] operations = new char[3];
        int[] ans = {10000000000000000000000000};
        
        // Input nums array
        Scanner scanner = new Scanner(System.in);
        for(int i=0; i<4; i++) {
            nums[i] = scanner.nextInt();
        }
        
        // Input operations array
        scanner.nextLine();
        String operationsString = scanner.nextLine();
        for(int i=0; i<3; i++) {
            operations[i] = operationsString.charAt(i);
        }
        
        rememberTheNumber(nums, 0, operations, ans);
        System.out.println(ans[0]);
    }
}