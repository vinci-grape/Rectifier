import java.util.Scanner;

public class s150958471 {
    public static void main(String[] args) {
        int[] train = new int[2];
        int[] bus = new int[2];

        Scanner scanner = new Scanner(System.in);
        train[0] = scanner.nextInt();
        train[1] = scanner.nextInt();
        bus[0] = scanner.nextInt();
        bus[1] = scanner.nextInt();

        System.out.println(Math.min(train[0], train[1]) + Math.min(bus[0], bus[1]));

        scanner.close();
    }
}