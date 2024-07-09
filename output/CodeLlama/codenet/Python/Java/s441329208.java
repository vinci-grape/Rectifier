import java.util.Scanner;

public class s441329208 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String t = sc.nextLine();
        char[] s1 = s.toCharArray();
        char[] t1 = t.toCharArray();
        Arrays.sort(s1);
        Arrays.sort(t1);
        if (Arrays.compare(s1, t1) < 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}