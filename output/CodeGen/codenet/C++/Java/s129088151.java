public class s129088151 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        in.nextLine();
        String[] com = new String[n];
        String[] str = new String[n];
        for (int i = 0; i < n; i++) {
            com[i] = in.next();
            str[i] = in.next();
        }
        in.nextLine();
        Map<String, Boolean> T = new HashMap<String, Boolean>();
        for (int i = 0; i < n; i++) {
            if (com[i].equals("i")) T.put(str[i], true);
            else {
                if (T.get(str[i])) System.out.println("yes");
                else System.out.println("no");
            }
        }
    }
}