import java.util.*;
public class atcoder_AGC028_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        String S = sc.next();
        String T = sc.next();
        List<Integer> list_S = new ArrayList<Integer>();
        List<Integer> list_T = new ArrayList<Integer>();
        for (int i = 0; i < N; i++) {
            list_S.add(S.charAt(i) - '0');
        }
        for (int i = 0; i < M; i++) {
            list_T.add(T.charAt(i) - '0');
        }
        List<Integer> Number_i = new ArrayList<Integer>();
        for (int i = 0; i < N; i++) {
            Number_i.add(i);
        }
        List<Integer> Number_iMN = new ArrayList<Integer>();
        for (int i = 0; i < N; i++) {
            Number_iMN.add(i * M / N);
        }
        List<Integer> Number_j = new ArrayList<Integer>();
        for (int j = 0; j < M; j++) {
            Number_j.add(j);
        }
        List<Integer> Kaburi_j = new ArrayList<Integer>(Number_iMN);
        Kaburi_j.retainAll(Number_j);
        List<Integer> Kaburi_i = new ArrayList<Integer>();
        for (int j : Kaburi_j) {
            Kaburi_i.add(j * N / M);
        }
        int counter = 0;
        int Flag = 0;
        int Kaburi_Size = Kaburi_i.size();
        while (counter <= Kaburi_Size - 1) {
            if (list_S.get(Kaburi_i.get(counter)) == list_T.get(Kaburi_j.get(counter))) {
                counter++;
            } else {
                Flag = 1;
                break;
            }
        }
        if (Flag == 1) {
            System.out.println(-1);
        } else {
            System.out.println(N * M / Math.gcd(N, M));
        }
    }
}