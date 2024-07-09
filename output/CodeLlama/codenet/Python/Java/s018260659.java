import java.util.Scanner;

public class s018260659 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 1;
        while (cnt <= 9) {
            if (n % cnt == 0 && 1 <= n / cnt && n / cnt <= 9) {
                System.out.println("Yes");
                break;
            } else {
                cnt++;
            }
        }
        if (cnt > 9) {
            System.out.println("No");
        }
    }
}