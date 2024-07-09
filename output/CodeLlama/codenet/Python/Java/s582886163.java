import java.util.Scanner;

public class s582886163 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] capacity_list = new int[5];
        for (int i = 0; i < 5; i++) {
            capacity_list[i] = sc.nextInt();
        }
        int bottle_neck = capacity_list[0];
        System.out.println(4 + (N + bottle_neck - 1) / bottle_neck);
    }
}