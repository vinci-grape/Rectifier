public class atcoder_AGC028_A {
    public int findTheDifference(String s, String t) {
        int N = s.length();
        int M = t.length();
        int[] Number_i = new int[N];
        int[] Number_iMN = new int[N];
        for (int i = 0; i < N; i++) {
            Number_i[i] = i;
            Number_iMN[i] = i * M / N;
        }
        int[] Number_j = new int[M];
        int[] Kaburi_j = new int[M];
        for (int j = 0; j < M; j++) {
            Number_j[j] = j;
            Kaburi_j[j] = (int) (Number_iMN[j] * N / M);
        }
        int counter = 0;
        int Flag = 0;
        int Kaburi_Size = M;
        while (counter <= Kaburi_Size - 1) {
            if (s.charAt(Number_i[counter]) == t.charAt(Number_j[counter])) {
                counter++;
            } else {
                Flag = 1;
                break;
            }
        }
        if (Flag == 1) {
            return -1;
        }
        counter = 0;
        int gcd = 0;
        while (counter <= Kaburi_Size - 1) {
            gcd = gcd(Number_iMN[counter], Number_j[counter]);
            Number_i[counter] = Number_i[counter] * gcd / M;
            Number_iMN[counter] = Number_iMN[counter] * gcd / M;
            Number_j[counter] = Number_j[counter] * gcd / M;
            Kaburi_j[counter] = Kaburi_j[counter] * gcd / M;
            counter++;
        }
        int result = 0;
        for (int i = 0; i < N; i++) {
            result += Math.abs(Number_i[i] - Number_iMN[i]);
        }
        for (int j = 0; j < M; j++) {
            result += Math.abs(Number_j[j] - Kaburi_j[j]);
        }
        return result;
    }
    public int gcd(int a, int b) {
        while (b > 0) {
            a = a % b;
        }
        return a;
    }
}