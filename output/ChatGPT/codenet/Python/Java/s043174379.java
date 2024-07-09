import java.util.Scanner;

public class s043174379 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int H, W, h, w, ans;
        
        H = scanner.nextInt();
        W = scanner.nextInt();
        h = scanner.nextInt();
        w = scanner.nextInt();
        
        ans = H * W - (h * W + w * H - h * w);
        
        System.out.println(ans);
    }
}