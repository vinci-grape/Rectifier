import java.util.Scanner;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.stream.Collectors;

public class codeforces_299_A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Integer> a = Arrays.stream(sc.nextLine().split(" ")).map(Integer::parseInt).sorted().collect(Collectors.toList());
        System.out.println(a.get(0) == Collections.max(a) ? -1 : a.get(0));
    }
}