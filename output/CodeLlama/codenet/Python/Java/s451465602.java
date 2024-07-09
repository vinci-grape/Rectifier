import java.util.Scanner;

public class s451465602 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int h = n / 3600;
        n %= 3600;
        int m = n / 60;
        n %= 60;
        int s = n;
        System.out.println(h + ":" + m + ":" + s);
    }
}
