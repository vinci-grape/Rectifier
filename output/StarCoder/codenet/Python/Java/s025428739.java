import java.util.*;
public class s025428739 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int[] lst = new int[3];
        lst[0] = A+B;
        lst[1] = A-B;
        lst[2] = A*B;
        System.out.println(Arrays.stream(lst).max().getAsInt());
    }
}