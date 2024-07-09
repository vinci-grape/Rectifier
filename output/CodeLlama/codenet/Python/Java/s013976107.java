import java.util.*;
public class s013976107 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String[] arr = s.split(" ");
        int a = Integer.parseInt(arr[0]);
        int b = Integer.parseInt(arr[1]);
        String s1 = arr[2];
        if (s1.charAt(a) == '-' && s1.indexOf('-') == a) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}