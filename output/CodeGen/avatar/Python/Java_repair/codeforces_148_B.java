import java.util.*;

public class codeforces_148_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        Scanner scanner2 = new Scanner(System.in);
        String f = scanner2.next();
        String[] numbers = f.split(" ");
        int[] numbers2 = new int[numbers.length];
        for (int i = 0; i < numbers.length; i++) {
            numbers2[i] = Integer.parseInt(numbers[i]);
        }
        System.out.println(numberToNumber(numbers2, k));
    }
    private static int numberToNumber(String[] numbers, int k) {
        int result = 0;
        for (String number : numbers) {
            if (number.length() > k) {
                result++;
            }
        }
        return result;
    }
}