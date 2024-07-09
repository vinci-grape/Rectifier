import java.util.*;
public class s144923291 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        String s = "snuke";
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                char t = sc.next().charAt(0);
                if (s.charAt(j) == t) {
                    char c = (char) ('A' + j);
                    System.out.println(c + (i + 1));
                    return;
                }
            }
        }
    }
}