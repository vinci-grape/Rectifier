import java.util.*;

public class atcoder_AGC028_A {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        String s = scanner.nextLine();
        String t = scanner.nextLine();
        String[] Number_i = s.split(" ");
        String[] Number_iMN = t.split(" ");
        String[] Number_j = Number_iMN.clone();
        String[] Kaburi_j = Number_j.clone();
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
