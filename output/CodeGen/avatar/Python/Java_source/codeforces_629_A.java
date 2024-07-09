public class codeforces_629_A {
    public int findContentChildren(String[] cake) {
        int n = cake.length;
        int[] chocCount = new int[n];
        int happiness = 0;
        int nfat = 1;
        for (int i = 0; i < n; i++) {
            String line = cake[i];
            for (int j = 0; j < line.length(); j++) {
                if (line.charAt(j) == 'C') {
                    chocCount[i]++;
                }
            }
            if (chocCount[i] > 1) {
                for (int j = chocCount[i]; j > 1; j--) {
                    nfat *= j;
                }
                happiness += nfat / 2;
            }
            nfat = 1;
            chocCount[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (cake[i].charAt(j) == 'C') {
                    chocCount[i]++;
                }
            }
            if (chocCount[i] > 1) {
                for (int j = chocCount[i]; j > 1; j--) {
                    nfat *= j;
                }
                happiness += nfat / 2;
            }
            nfat = 1;
            chocCount[i] = 0;
        }
        return happiness;
    }
}