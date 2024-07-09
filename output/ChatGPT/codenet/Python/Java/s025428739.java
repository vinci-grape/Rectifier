import java.util.Scanner;

public class s025428739 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();
        
        int[] lst = new int[3];
        lst[0] = A + B;
        lst[1] = A - B;
        lst[2] = A * B;
        
        int max = lst[0];
        for (int i = 1; i < lst.length; i++) {
            if (lst[i] > max) {
                max = lst[i];
            }
        }
        
        System.out.println(max);
    }
}