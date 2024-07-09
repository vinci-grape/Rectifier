public class codeforces_342_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int s = scanner.nextInt();
        int f = scanner.nextInt();
        
        int d, k;
        String c;
        if (s < f) {
            d = 1;
            c = "R";
        } else {
            d = -1;
            c = "L";
        }
        
        String res = "";
        int i = 1;
        int j = s;
        int t, l, r;
        for (k = 1; j != f; k++) {
            t = scanner.nextInt();
            l = scanner.nextInt();
            r = scanner.nextInt();
            
            if (i > t && k < m) {
                k += 1;
            }
            
            if (i == t && (l <= j && j <= r || l <= j + d && j + d <= r)) {
                res += "X";
            } else {
                res += c;
                j += d;
            }
            
            i += 1;
        }
        
        System.out.println(res);
    }
}