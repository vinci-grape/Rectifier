public class codeforces_632_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        scanner.nextLine();
        String[] piecesInput = scanner.nextLine().split(" ");
        String[] typesInput = scanner.nextLine().split(" ");
        int[] pieces = new int[piecesInput.length];
        String[] types = new String[typesInput.length];
        for (int i = 0; i < piecesInput.length; i++) {
            pieces[i] = Integer.parseInt(piecesInput[i]);
            types[i] = typesInput[i];
        }
        System.out.println(bobMaxStrength(pieces, types));
    }

    public static int bobMaxStrength(int[] pieces, String[] types) {
        int pScore = 0;
        int sScore = 0;
        int pMaxScore = 0;
        int sMaxScore = 0;
        for (int i = 0; i < pieces.length; i++) {
            if (types[i].equals("B")) {
                pScore += pieces[i];
                sScore += pieces[i];
            }
        }
        pMaxScore = pScore;
        sMaxScore = sScore;

        for (int i = 0; i < pieces.length; i++) {
            if (types[i].equals("A")) {
                pScore += pieces[i];
                if (pScore > pMaxScore) {
                    pMaxScore = pScore;
                }
            } else {
                pScore -= pieces[i];
            }
        }

        for (int i = pieces.length - 1; i >= 0; i--) {
            if (types[i].equals("A")) {
                sScore += pieces[i];
                if (sScore > sMaxScore) {
                    sMaxScore = sScore;
                }
            } else {
                sScore -= pieces[i];
            }
        }

        if (pMaxScore > sMaxScore) {
            return pMaxScore;
        } else {
            return sMaxScore;
        }
    }
}