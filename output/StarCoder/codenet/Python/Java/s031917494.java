import java.util.Scanner;

public class s031917494 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "Christmas";
        String e = "Eve";
        int n = Math.abs(sc.nextInt()-25);
        for (int i = 0; i < n; i++) {
            s += e;
        }
        System.out.println(s);
    }
}