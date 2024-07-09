import java.util.*;
public class s091400419 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int[] lst = new int[3];
        lst[0] = a + b;
        lst[1] = a - b;
        lst[2] = a * b;
        System.out.println(Arrays.stream(lst).max().getAsInt());
    }
}