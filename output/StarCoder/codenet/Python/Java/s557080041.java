import java.util.Scanner;

public class s557080041 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        if (N == 0) {
            System.out.println("Yes");
        } else {
            String NStr = String.valueOf(N);
            int sum = 0;
            for (int i = 0; i < NStr.length(); i++) {
                sum += Integer.parseInt(NStr.substring(i, i + 1));
            }
            if (sum % 9 == 0) {
                System.out.println("Yes");
            } else {
                System.out.println("No");
            }
        }
    }
}