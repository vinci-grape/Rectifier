import java.util.Scanner;

public class s438448326 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A, B, C, D, E, F;
        A = scanner.nextInt();
        B = scanner.nextInt();
        C = scanner.nextInt();
        D = scanner.nextInt();
        E = scanner.nextInt();
        F = scanner.nextInt();

        int m1 = 0, m2 = 0;
        float maxD = 0.f;
        for (int i = 0; 100 * A * i <= F; i++) {
            int mA = 100 * A * i;
            for (int j = 0; mA + 100 * B * j <= F; j++) {
                int mB = 100 * B * j;
                for (int k = 0; mA + mB + C * k <= F; k++) {
                    int mC = C * k;
                    for (int l = 0; mA + mB + mC + D * l <= F; l++) {
                        int mD = D * l;
                        if ((mA + mB) * E / 100 < mD + mC) {
                            break;
                        }
                        float d = (float) (mD + mC) / (float) (mA + mB + mC + mD);
                        if (d > maxD) {
                            m1 = mA + mB + mC + mD;
                            m2 = mC + mD;
                            maxD = d;
                        }
                    }
                }
            }
        }
        if (m1 == 0) {
            m1 = 100 * A;
        }
        System.out.println(m1 + " " + m2);
    }
}