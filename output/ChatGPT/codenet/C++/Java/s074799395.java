import java.util.Scanner;

public class s074799395 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char B, OUT;
        B = scanner.next().charAt(0);
        if (B == 'A') OUT = 'T';
        else if (B == 'T') OUT = 'A';
        else if (B == 'C') OUT = 'G';
        else OUT = 'C';
        System.out.println(OUT);
    }
}