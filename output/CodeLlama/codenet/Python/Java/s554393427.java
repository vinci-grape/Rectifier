import java.util.Scanner;

public class s554393427 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        double[][] mo = new double[n][2];
        for (int i = 0; i < n; i++) {
            mo[i][0] = sc.nextDouble();
            mo[i][1] = sc.next();
        }
        double okz = 0;
        for (int i = 0; i < n; i++) {
            if (mo[i][1].equals("JPY")) {
                okz += mo[i][0];
            } else {
                okz += mo[i][0] * 380000;
            }
        }
        System.out.println(okz);
    }
}