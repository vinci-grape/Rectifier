import java.util.*;

public class s225615697 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int m1 = (int) Math.floor(Arrays.stream(a).map(x -> x * ((-1) ^ i)).sum() / 2);

        String result = String.valueOf(m1);

        int[] m = new int[n];
        m[0] = m1;
        for (int i = 1; i < n; i++) {
            m[i] = a[i - 1] - m[i - 1];
        }

        System.out.println(String.join(" ", Arrays.stream(m).mapToObj(x -> String.valueOf(x * 2)).toArray(String[]::new)));
    }
}