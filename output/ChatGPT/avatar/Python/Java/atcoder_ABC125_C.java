import java.util.Scanner;

public class atcoder_ABC125_C {
    
    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    
    public static int[] ruisekiLR(int[] array) {
        int[] left = new int[array.length + 1];
        int[] right = new int[array.length + 1];
        int e = 0;
        
        for (int i = 0; i < array.length; i++) {
            left[i + 1] = gcd(left[i], array[i]);
        }
        
        for (int i = array.length - 1; i >= 0; i--) {
            right[i] = gcd(right[i + 1], array[i]);
        }
        
        return new int[]{left, right};
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        
        int[] lr = ruisekiLR(a);
        int[] left = lr[0];
        int[] right = lr[1];
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            ans = Math.max(gcd(left[i], right[i + 1]), ans);
        }
        
        System.out.println(ans);
    }
}