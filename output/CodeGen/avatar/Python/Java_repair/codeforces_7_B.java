import java.util.*;

public class codeforces_7_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int m = in.nextInt();
        int[] alocuente = new int[m];
        int ind = 1;
        for (int i = 0; i < t; i++) {
            String[] ops = in.next().split(" ");
            if (ops[0].equals("alloc")) {
                int pos = 0;
                for (int j = 0; j < m; j++) {
                    if (alocuente[j] == 0) {
                        pos += 1;
                        if (pos == Integer.parseInt(ops[1])) {
                            alocuente[j - Integer.parseInt(ops[1]) + 1] = ind;
                            ind += 1;
                            break;
                        }
                    } else {
                        pos = 0;
                    }
                }
            } else if (ops[0].equals("erase")) {
                int pos = 0;
                if (Integer.parseInt(ops[1])!= 0) {
                    for (int j = 0; j < m; j++) {
                        if (Integer.parseInt(ops[1]) > 0 && alocuente[j] == Integer.parseInt(ops[1])) {
                            alocuente[j] = 0;
                        }
                    }
                }
            } else if (ops[0].equals("defragment")) {
                int cnt = 0;
                for (int j = 0; j < m; j++) {
                    if (alocuente[j] == 0) {
                        alocuente[j] = ind;
                        ind += 1;
                        cnt += 1;
                    }
                }
                for (int j = 0; j < cnt; j++) {
                    alocuente[j] = 0;
                }
            }
        }
        for (int j = 0; j < m; j++) {
            if (alocuente[j]!= 0) {
               