import java.util.Scanner;

public class s869207096 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String s = input.next();
        int cnt = 1;
        
        for (int i = 0; i < n-1; i++) {
            if (s.charAt(i) == s.charAt(i+1)) {
                continue;
            } else {
                cnt += 1;
            }
        }
        
        System.out.println(cnt);
    }
}