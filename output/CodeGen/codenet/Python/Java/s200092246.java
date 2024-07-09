public class s200092246 {
    public int[] solution(int N) {
        int[] ans = new int[2];
        for (int i = 1; i <= N; i++) {
            if (i + 1 < N && sum(range(1, i + 1)) < N) {
                continue;
            } else {
                ans = new int[]{i - 1, sum(range(1, i + 1)) - N};
                break;
            }
        }
        for (int i = ans[0] + 1; i <= ans[1]; i++) {
            if (i + 1!= ans[1]) {
                System.out.println(i + 1);
            }
        }
        return ans;
    }
    
    public int sum(int[] arr) {
        int sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }
}