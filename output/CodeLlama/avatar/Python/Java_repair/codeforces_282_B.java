import java.util.*;

public class codeforces_282_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int firstline = sc.nextInt();
        int total = 0;
        String memory = "";
        for (int x = 0; x < firstline; x++) {
            int A = sc.nextInt();
            int G = sc.nextInt();
            if (total + A <= 500) {
                total += A;
                memory += "A";
            } else {
                total -= G;
                memory += "G";
            }
        }
        System.out.println(memory);
    }
}