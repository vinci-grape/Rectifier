import java.util.*;
public class codeforces_632_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] pieces = new int[in.nextInt()];
        for (int i = 0; i < pieces.length; i++) {
            pieces[i] = in.nextInt();
        }
        System.out.println(Bob_sMaxStrength(pieces));
    }
    public static int Bob_sMaxStrength(int[] pieces) {
        int pScore = 0, sScore = 0, pMaxScore = 0, sMaxScore = 0;
        for (int i = 0; i < pieces.length; i++) {
            if (i % 2 == 0) {
                pScore += pieces[i];
                if (pScore > pMaxScore) {
                    pMaxScore = pScore;
                }
            } else {
                sScore += pieces[i];
                if (sScore > sMaxScore) {
                    sMaxScore = sScore;
                }
            }
        }
        return pMaxScore > sMaxScore? pMaxScore : sMaxScore;
    }
}
