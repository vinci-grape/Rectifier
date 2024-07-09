import java.util.Scanner;

public class s451465602 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        
        int h = n / 3600;
        n %= 3600;
        int m = n / 60;
        n %= 60;
        int s = n;
        
        System.out.println(h + ":" + m + ":" + s);
    }
}