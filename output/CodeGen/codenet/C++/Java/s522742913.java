public class s522742913 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String source = in.next();
        int max_i = (int) Math.pow(2, source.length() - 1);
        double sum = 0;
        for (int i = 0; i < max_i; ++i) {
            String plus = Integer.toBinaryString(i);
            while (plus.length() < source.length()) {
                plus = "0" + plus;
            }
            double number = 0;
            String working = source;
            while (plus.contains("1")) {
                int i = 0;
                while (!plus.substring(i, i + 1).equals("1")) {
                    i++;
                }
                sum += Double.parseDouble(working.substring(0, i + 1));
                plus = plus.substring(i + 1);
                working = working.substring(i + 1);
            }
            sum += Double.parseDouble(working);
        }
        System.out.println(sum);
    }
}