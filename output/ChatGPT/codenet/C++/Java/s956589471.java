// Java code equivalent of the given C++ code

import java.util.Scanner;

public class s956589471 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b, c, d, e, k;
        a = scanner.nextInt();
        b = scanner.nextInt();
        c = scanner.nextInt();
        d = scanner.nextInt();
        e = scanner.nextInt();
        k = scanner.nextInt();

        System.out.println((e - a <= k) ? "Yay!" : ":(");
    }
}