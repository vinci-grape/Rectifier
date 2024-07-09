public class s074619936 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str;
        int sum;
        while (in.hasNext()) {
            str = in.next();
            if (str.equals("0")) break;
            sum = 0;
            for (int i = 0; i < str.length(); i++) {
                sum += Integer.parseInt(str.substring(i, i + 1));
            }
            System.out.println(sum);
        }
    }
}