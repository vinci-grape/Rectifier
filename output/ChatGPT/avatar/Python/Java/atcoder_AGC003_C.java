public class atcoder_AGC003_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = Integer.parseInt(scanner.nextLine());
        int[] A = new int[N];
        
        for (int i = 0; i < N; i++) {
            A[i] = Integer.parseInt(scanner.nextLine()) * N + i;
        }
        
        Arrays.sort(A);
        
        int cnt = 0;
        
        for (int i = 0; i < N; i++) {
            int d = (A[i] % N) % 2;
            if (d % 2 != i % 2) {
                cnt += 1;
            }
        }
        
        System.out.println(cnt / 2);
    }
}