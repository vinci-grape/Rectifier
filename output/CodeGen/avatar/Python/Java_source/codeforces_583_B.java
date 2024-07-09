public class codeforces_583_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int currentLevel = 0;
        int counter = 0;
        int counterTurns = -1;
        while (counter < n) {
            counterTurns += 1;
            for (int i = 0; i < n; i++) {
                if (a[i]!= -1 && a[i] <= counter) {
                    counter += 1;
                    a[i] = -1;
                }
            }
            a.reverse();
        }
        System.out.println(counterTurns);
    }
}