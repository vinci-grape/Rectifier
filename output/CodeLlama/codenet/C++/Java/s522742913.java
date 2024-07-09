import java.util.Scanner;

public class s522742913 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String source = sc.nextLine();
        if (source.length() > 10 || source.length() < 1) {
            return;
        }
        int max_i = (int) Math.pow(2, source.length() - 1);
        double sum = 0;
        for (int i = 0; i < max_i; i++) {
            String plus = Integer.toBinaryString(i);
            while (plus.length() < source.length()) {
                plus = "0" + plus;
            }
            double number = 0;
            String working = source;
            for (int j = 0; j < plus.length(); j++) {
                if (plus.charAt(j) == '1') {
                    number += Double.parseDouble(working.substring(0, j + 1));
                    working = working.substring(j + 1);
                }
            }
            number += Double.parseDouble(working);
            sum += number;
        }
        System.out.printf("%.0f", sum);
    }
}