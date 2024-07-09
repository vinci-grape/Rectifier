public class s759547301 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        if ("Sunny".equals(S)) {
            System.out.println("Cloudy");
        } else if ("Cloudy".equals(S)) {
            System.out.println("Rainy");
        } else if ("Rainy".equals(S)) {
            System.out.println("Sunny");
        }
    }
}