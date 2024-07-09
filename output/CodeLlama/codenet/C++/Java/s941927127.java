import java.util.Scanner;
import java.util.Arrays;

public class s941927127 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String W = sc.nextLine();
        char[] w = W.toCharArray();
        Arrays.sort(w);
        for (int i = 0; i < w.length; i+=2) {
            if (w[i] != w[i+1]) {
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}