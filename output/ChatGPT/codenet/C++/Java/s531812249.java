import java.util.Scanner;

public class s531812249 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        
        int ans = 0;
        
        // gu gu
        ans += n * (n - 1) / 2;
        
        // kiki
        ans += m * (m - 1) / 2;
        
        System.out.println(ans);
    }
}