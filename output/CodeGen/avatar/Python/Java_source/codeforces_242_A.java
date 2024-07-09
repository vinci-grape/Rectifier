public class codeforces_242_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        List<Integer> games = new ArrayList<>();
        for (int i = a; i <= x; i++) {
            if (i <= b) continue;
            else {
                for (int j = b; j <= y; j++) {
                    if (i > j) continue;
                    games.add(i);
                    games.add(j);
                }
            }
        }
        System.out.println(games.size());
        for (int i : games) {
            System.out.println(i);
        }
    }
}