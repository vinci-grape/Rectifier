public class s267613210 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int K = in.nextInt();
        int N = in.nextInt();
        int[] A = new int[N];
        for (int A_i = 0; A_i < N; A_i++) {
            A[A_i] = in.nextInt();
        }
        int[] dist = new int[N-1];
        for (int i = 0; i < N-1; i++) {
            dist[i] = A[i+1] - A[i];
        }
        dist[N-1] = K + A[0] - A[N-1];
        int maxv = max(dist);
        System.out.println(sum(dist) - maxv);
    }
    
    private static int max(int[] A) {
        int max = A[0];
        for (int i = 1; i < A.length; i++) {
            if (A[i] > max) {
                max = A[i];
            }
        }
        return max;
    }
    
    private static int sum(int[] A) {
        int sum = 0;
        for (int i = 0; i < A.length; i++) {
            sum += A[i];
        }
        return sum;
    }
}