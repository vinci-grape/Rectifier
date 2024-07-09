import java.util.Scanner;

public class atcoder_AGC025_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        String[] a = {"10", "100", "1000", "10000", "100000"};
        int newVal = 0;
        for (int i = 0; i < n.length(); i++) {
            newVal += Integer.parseInt(n.substring(i, i + 1));
        }
        boolean found = false;
        for (String element : a) {
            if (n.equals(element)) {
                found = true;
                break;
            }
        }
        if (found) {
            System.out.println(10);
        } else {
            System.out.println(newVal);
        }
    }
}