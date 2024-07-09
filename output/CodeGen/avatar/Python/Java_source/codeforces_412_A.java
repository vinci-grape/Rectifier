public class codeforces_412_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        String v = in.next();
        String[] d = new String[2];
        d[0] = "LEFT";
        d[1] = "RIGHT";
        boolean f = k - 1 < n - k;
        int m = Math.min(k - 1, n - k);
        String[] a = new String[m + 1];
        for(int i = 0; i < m; i++) {
            a[i] = d[f? 1 : 0];
        }
        for(int i = 0; i < v.length(); i++) {
            if(v.charAt(i) =='') {
                a[m] = "PRINT ";
                a[m + 1] = d[f? 0 : 1];
                m += 2;
            } else {
                a[m] = d[f? 0 : 1];
                m++;
            }
        }
        System.out.println(a[0]);
        for(int i = 1; i < a.length; i++) {
            System.out.println(a[i]);
        }
    }
}