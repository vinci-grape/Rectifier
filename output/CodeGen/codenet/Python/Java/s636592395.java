public class s636592395 {
    public int findLength(int[] A) {
        Arrays.sort(A);
        return A[A.length - 1] - A[0];
    }

    public static void main(String[] args) {
        int[] A = {1, 2, 3, 4, 5};
        System.out.println(new Solution().findLength(A));
    }
}