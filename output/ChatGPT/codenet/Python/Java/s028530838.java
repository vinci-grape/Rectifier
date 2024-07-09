import java.util.Scanner;

public class s028530838 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String x = scanner.nextLine();
        if (x.toLowerCase().equals(x)) {
            System.out.println("a");
        } else {
            System.out.println("A");
        }
    }
}