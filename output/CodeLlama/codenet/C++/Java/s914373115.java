import java.util.Scanner;

public class s914373115 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int i = 0;
        int sum = 100;
        while (sum < x) {
            sum += sum / 100;
            i++;
        }
        System.out.println(i);
    }
}