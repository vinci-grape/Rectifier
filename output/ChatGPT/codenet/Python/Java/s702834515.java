import java.util.Scanner;

public class s702834515 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int r = 0;
        
        for (int i = 0; i < n; i++) {
            if ((i + 1) % 3 != 0 && (i + 1) % 5 != 0) {
                r += (i + 1);
            }
        }
        
        System.out.println(r);
    }
}