import java.util.Scanner;

public class atcoder_AGC025_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String n = scanner.nextLine();
        String[] a = {"10", "100", "1000", "10000", "100000"};
        int newSum = 0;

        for (int i = 0; i < n.length(); i++) {
            newSum += Character.getNumericValue(n.charAt(i));
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
            System.out.println(newSum);
        }
    }
}