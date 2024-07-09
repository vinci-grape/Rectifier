public class s993625131 {
    public int findMaxLength(String[] S) {
        int max = 0;
        int count = 0;
        for (int i = 0; i < S.length; i++) {
            if (S[i].equals("A") || S[i].equals("C") || S[i].equals("G") || S[i].equals("T")) {
                count++;
            } else {
                if (count > max) {
                    max = count;
                }
                count = 0;
            }
        }
        if (count > max) {
            max = count;
        }
        return max;
    }
}