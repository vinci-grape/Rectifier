import java.util.Scanner;
public class atcoder_ABC170_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(" ");
        for (int i = 0; i < s.length; i++) {
            if (Integer.parseInt(s[i]) == 0) {
                System.out.println(i + 1);
                break;
            }
        }
    }
}