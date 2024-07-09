import java.util.*;
public class codeforces_7_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int m = sc.nextInt();
        int[] alocuente = new int[m];
        int ind = 1;
        for (int i = 0; i < t; i++) {
            String[] op = sc.next().split(" ");
            if (op[0].equals("alloc")) {
                int pos = 0;
                for (int j = 0; j < m; j++) {
                    if (alocuente[j] == 0) {
                        pos++;
                        if (pos == Integer.parseInt(op[1])) {
                            for (int k = j - Integer.parseInt(op[1]) + 1; k <= j; k++) {
                                alocuente[k] = ind;
                            }
                            System.out.println(ind);
                            ind++;
                            break;
                        }
                    } else {
                        pos = 0;
                    }
                } else {
                    System.out.println("NULL");
                }
            }
            if (op[0].equals("erase")) {
                int pos = 0;
                if (Integer.parseInt(op[1]) == 0 ||!Arrays.asList(alocuente).contains(Integer.parseInt(op[1]))) {
                    System.out.println("ILLEGAL_ERASE_ARGUMENT");
                } else {
                    for (int j = 0; j < m; j++) {
                        if (Integer.parseInt(op[1]) > 0 && alocuente[j] == Integer.parseInt(op[1])) {
                            alocuente[j] = 0;
                        }
                    }
                }
            }
            if (op[0].equals("defragment")) {
                int cnt = 0;
                cnt = Arrays.asList(alocuente).contains(0)? 1 : 0;
                alocuente = Arrays.asList(alocuente).stream().filter(j -> j!= 0).toArray(Integer[]::new);
                for (int j = 0; j < cnt; j++) {
                    alocuente[alocuente.length - 1 - j] = 0;
                }
            }
        }
    }
}