import java.util.Scanner;

public class s817205687 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int[] A = new int[N];
        for (int i = 0; i < N; i++) {
            A[i] = sc.nextInt();
        }

        // 最初、Aの要素は全て偶数。2で割ったものに置き換え
        for (int i = 0; i < N; i++) {
            A[i] /= 2;
        }

        // 全ての要素について、２で割れる回数が同じでないと題意は満たせない
        int countDiv2 = 0;
        for (int a : A) {
            int cnt = 0;
            while (a % 2 == 0) {
                a /= 2;
                cnt++;
            }
            // 1個目は無条件で保存
            if (countDiv2 == 0) {
                countDiv2 = cnt;
            }
            // 2個目からチェック
            else if (cnt != countDiv2) {
                System.out.println(0);
                return;
            }
        }

        // my_lcm = Aの全要素の最小公倍数。　この奇数倍が題意を満たす。
        // my_lcmがMを超えていたら1つも作れない
        int myLcm = 1;
        for (int a : A) {
            myLcm = myLcm * a / gcd(myLcm, a);
        }
        if (myLcm > M) {
            System.out.println(0);
            return;
        }

        int tmp = M / myLcm;
        // my_lcmの1,2,...M倍まで使えるが、偶数は使えない
        // tmp=1or2なら1個, 3or4なら2個, 5or6なら3個,...
        int ans = (tmp + 1) / 2;
        System.out.println(ans);
    }

    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
}