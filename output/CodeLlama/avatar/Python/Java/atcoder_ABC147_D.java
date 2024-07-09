import java.util.Scanner;
import java.util.stream.IntStream;
import java.util.stream.Stream;

public class atcoder_ABC147_D {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] A = Stream.of(sc.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
        int result = 0;
        for (int b = 0; b < 60; b++) {
            int bs = IntStream.of(A).map(x -> (x >> b) & 1).sum();
            result = (result + bs * (N - bs) * (1 << b)) % 1000000007;
        }
        System.out.println(result);
    }
}