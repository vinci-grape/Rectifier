import java.util.*;

public class s575946485 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        for (int i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }
        Map<Integer, Integer> dic = new HashMap<>();
        for (int i = 0; i < 5; i++) {
            if (a[i] % 10 == 0) {
                dic.put(i, 0);
            } else {
                dic.put(i, a[i] % 10);
            }
        }
        int min_num = Collections.min(dic.values());
        int a_sum = 0;
        for (int i = 0; i < 5; i++) {
            a_sum += a[i];
        }
        dic.remove(Collections.min(dic.values()));
        System.out.println(Math.abs(sum(dic.values())) + a_sum);
    }
}