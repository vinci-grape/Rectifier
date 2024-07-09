import java.util.Scanner;
import java.lang.Math;
import java.util.*;
import java.util.*;
import java.util.*;

public class atcoder_ARC086_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }
        Collections.sort(list);
        System.out.println(list);
    }
}