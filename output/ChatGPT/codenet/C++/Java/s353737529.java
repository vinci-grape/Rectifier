// Java code

import java.util.Scanner;

public class s353737529 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        StringBuilder s = new StringBuilder();

        if (n == 0) {
            System.out.println('0');
            return;
        }

        while (n != 0) {
            if (n % 2 == 0) {
                s.append('0');
            } else {
                s.append('1');
            }

            n -= Math.abs(n % 2);
            n /= -2;
        }

        System.out.println(s.reverse().toString());
    }
}