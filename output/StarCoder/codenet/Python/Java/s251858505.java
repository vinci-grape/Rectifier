import java.util.*;

public class s251858505 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println(Arrays.stream(sc.nextLine().split(" ")).map(Integer::parseInt).map(i -> sc.nextInt() == i).mapToInt(i -> i? 1 : 0).sum());
    }
}