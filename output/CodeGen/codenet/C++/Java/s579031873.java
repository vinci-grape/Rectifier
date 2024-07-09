public class s579031873 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int X = in.nextInt();
        int[] roads = new int[N];
        for (int i = 0; i < N; i++) {
            roads[i] = in.nextInt();
        }
        int[] qs = new int[N];
        for (int i = 0; i < N; i++) {
            qs[i] = in.nextInt();
        }
        int ans = 0;
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            int tmp = roads[i];
            X -= tmp;
            ans++;
            if (tmp < min) min = tmp;
        }
        ans += X / min;
        System.out.println(ans);
    }
}