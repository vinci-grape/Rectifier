public class codeforces_302_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] sa = new int[n];
        for(int sa_i=0; sa_i < n; sa_i++){
            sa[sa_i] = in.nextInt();
        }
        int[] ss = new int[m];
        for(int ss_i=0; ss_i < m; ss_i++){
            int a = in.nextInt();
            int b = in.nextInt();
            b -= a;
            ss[ss_i] = (b % 2 && b <= (n << 1))? 1 : 0;
        }
        StringBuilder sb = new StringBuilder();
        for(int ss_i=0; ss_i < m; ss_i++){
            sb.append(ss[ss_i]);
        }
        System.out.println(sb.toString());
    }
}