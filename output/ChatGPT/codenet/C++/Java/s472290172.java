import java.util.Scanner;

public class s472290172 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.next();
        
        int max = 0, cnt = 0;
        for (char sc : str.toCharArray()) {
            if (sc == 'A' || sc == 'C' || sc == 'G' || sc == 'T') {
                cnt++;
            } else {
                cnt = 0;
            }
            max = Math.max(cnt, max);
        }
        
        System.out.println(max);
    }
}