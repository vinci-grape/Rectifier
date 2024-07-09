import java.util.*;

public class atcoder_ABC119_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        double[] x = new double[n];
        for(int i = 0; i < n; i++){
            x[i] = in.nextDouble();
        }
        double sum = 0;
        for(int i = 0; i < n; i++){
            sum += x[i];
        }
        System.out.println(sum);
    }
}