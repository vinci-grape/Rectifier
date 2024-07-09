public class s554393427 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        String[] mo = new String[n];
        for (int i = 0; i < n; i++) {
            String[] input = in.nextLine().split(" ");
            mo[i] = input[0];
        }
        in.close();
        double okz = 0;
        for (int i = 0; i < n; i++) {
            if (mo[i].equals("JPY")) {
                okz += Double.parseDouble(mo[i]);
            } else {
                okz += Double.parseDouble(mo[i]) * 380000;
            }
        }
        System.out.println(okz);
    }
}