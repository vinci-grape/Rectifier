public class codeforces_632_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] pieces = new int[n];
        for (int i = 0; i < n; i++) {
            pieces[i] = in.nextInt();
        }
        int pScore = 0;
        int sScore = 0;
        int pMaxScore = 0;
        int sMaxScore = 0;
        for (int i = 0; i < n; i++) {
            if (pieces[i] > 0) {
                pScore += pieces[i];
                if (pScore > pMaxScore) {
                    pMaxScore = pScore;
                }
            } else {
                pScore -= pieces[i];
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (pieces[i] > 0) {
                sScore += pieces[i];
                if (sScore > sMaxScore) {
                    sMaxScore = sScore;
                }
            } else {
                sScore -= pieces[i];
            }
        }
        if (pMaxScore > sMaxScore) {
            System.out.println(pMaxScore);
        } else {
            System.out.println(sMaxScore);
        }
    }
}