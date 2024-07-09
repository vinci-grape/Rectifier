// Java code to check if a given string can be divided into certain substrings

import java.util.Scanner;

public class s023282516 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String S = scanner.next();

        // Reverse the given string
        StringBuilder reversed = new StringBuilder(S).reverse();

        String[] divide = {"dream", "dreamer", "erase", "eraser"};

        // Reverse each string in the divide array
        for (int i = 0; i < divide.length; i++) {
            divide[i] = new StringBuilder(divide[i]).reverse().toString();
        }

        // Check if the reversed string can be divided using the substrings in divide array
        boolean can = true;
        int i = 0;
        while (i < reversed.length()) {
            boolean can2 = false;
            for (String d : divide) {
                if (reversed.substring(i).startsWith(d)) {
                    can2 = true;
                    i += d.length();
                }
            }
            if (!can2) {
                can = false;
                break;
            }
        }

        if (can) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}