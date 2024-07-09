import java.util.Scanner;

public class s914373115 {

    public static void main(String[] args) {
        B();
    }

    public static void B() {
        Scanner sc = new Scanner(System.in);
        long x = sc.nextLong();
        long sum = 100;
        int i;
        for (i = 0; sum < x; ++i) {
            sum += sum / 100;
        }
        System.out.println(i);
    }
}