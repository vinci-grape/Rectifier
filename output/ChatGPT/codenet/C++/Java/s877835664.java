import java.util.*;

public class s877835664 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long N = scanner.nextLong();
        long K = scanner.nextLong();
        
        List<Long> A = new ArrayList<>();
        A.add(0L); // dummy element
        for (int i = 1; i < N; i++) {
            A.add(scanner.nextLong());
        }
        
        long cur = 1;
        List<Long> dic = new ArrayList<>(Collections.nCopies((int) (N + 1), -1L));
        boolean flg = false;
        for (long i = 1; i <= K; i++) {
            if (dic.get((int) cur) < 0 || flg) {
                dic.set((int) cur, i);
                cur = A.get((int) cur);
            } else if (!flg) {
                long tmp = K - (dic.get((int) cur) - 1);
                tmp %= i - dic.get((int) cur);
                i = K - tmp;
                flg = true;
            }
        }
        
        System.out.println(cur);
    }
}