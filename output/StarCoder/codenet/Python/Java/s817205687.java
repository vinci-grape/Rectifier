import java.util.stream.IntStream;

public class s817205687 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        int[] A = IntStream.range(0, N).map(i -> sc.nextInt()).toArray();

        // 最初、Aの要素は全て偶数。2で割ったものに置き換え
        A = Arrays.stream(A).map(a -> a / 2).toArray();

        // 全ての要素について、２で割れる回数が同じでないと題意は満たせない
        int countDiv2 = null;
        for (int a : A) {
            int cnt = 0;
            while (a % 2 == 0) {
                a /= 2;
                cnt++;
            }
            // 1個目は無条件で保存
            if (countDiv2 == null) {
                countDiv2 = cnt;
            }
            // 2個目からチェック
            else if (cnt!= countDiv2) {
                System.out.println(0);
                return;
            }
        }

        // my_lcm = Aの全要素の最小公倍数。　この奇数倍が題意を満たす。
        // my_lcmがMを超えていたら1つも作れない
        int myLcm = IntStream.of(A).reduce(1, (a, b) -> a * b / Math.gcd(a, b));
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
}