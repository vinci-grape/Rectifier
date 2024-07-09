import java.util.Scanner;

public class s522742913 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String source = scanner.next();

        if (source.length() > 10 || source.length() < 1) {
            return;
        }

        int max_i = (int) Math.pow(2, source.length() - 1);

        double sum = 0;

        for (int i = 0; i < max_i; ++i) {
            String plus = Integer.toBinaryString(i);

            double number = 0;

            String working = source;
            while (plus.contains("1")) {
                int index = plus.indexOf('1');
                sum += Double.parseDouble(working.substring(0, index + 1));
                plus = plus.substring(index + 1);
                working = working.substring(index + 1);
            }
            sum += Double.parseDouble(working);
        }

        System.out.printf("%.0f%n", sum);
    }
}