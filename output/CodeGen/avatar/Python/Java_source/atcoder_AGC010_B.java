public class atcoder_AGC010_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int sum = 0;
        for(int i=0; i < n; i++){
            sum += a[i];
        }
        int k = sum / (n * (n + 1) / 2);
        a = Arrays.copyOf(a, a.length + 1);
        a[a.length - 1] = a[0];
        int[] b = new int[a.length];
        for(int i=1; i < a.length; i++){
            b[i] = (k - a[i] + a[i - 1]) % n;
        }
        boolean[] c = new boolean[n];
        for(int i=0; i < b.length; i++){
            c[b[i]] = true;
        }
        for(int i=0; i < n; i++){
            if(c[i]){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
}