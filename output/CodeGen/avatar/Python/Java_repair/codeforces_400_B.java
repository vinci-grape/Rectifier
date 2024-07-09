import java.util.*;

public class codeforces_400_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] emails = scanner.nextLine().split("@");
        if (emails.length!= 2) {
            System.out.println("Please input a valid email");
            System.exit(1);
        }
        String name = emails[0];
        String domain = emails[1];
        StringBuilder sb = new StringBuilder();
        sb.append(name).append(".").append(domain);
        System.out.println(sb.toString());
    }
}