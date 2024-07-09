class atcoder_ABC123_C {
    def main(args):
        N = int(sc.next())
        min = 0
        for i in range(5):
            if i == 0:
                min = sc.next()
            else:
                min = min if min > sc.next() else sc.next()
        print(int(round(N/min)+4))
    def p(ans):
        print(ans)
    def p(int ans):
        print(ans)
    def p():
        print()
    def p(long ans):
        print(ans)
    def p(double ans):
        print(ans)
}




import java.util.Scanner;
import java.util.ArrayDeque;
import java.util.Queue;
import java.util.Random;
import java.util.Scanner;
public class atcoder_ABC123_C {
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        long N = sc.nextLong();
        long min = 0;
        for (int i = 0; i < 5; i++) {
            if (i == 0) {
                min = sc.nextLong();
            } else {
                min = min if min > sc.nextLong() else sc.nextLong();
            }
        }
        p((long) Math.ceil((double) N / min) + 4);
    }
    private static void p(String ans) {
        System.out.println(ans);
    }
    private static void p(int ans) {
        System.out.println(ans);
    }
    private static void p() {
        System.out.println();
    }
    private static void p(long ans) {
        System.out.println(ans);
    }
    private static void p(double ans) {
        System.out.println(ans);
    }
}