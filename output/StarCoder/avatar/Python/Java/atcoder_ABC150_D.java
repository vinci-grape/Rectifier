import java.util.*;
public class atcoder_ABC150_D {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int num = sc.nextInt();
        Set<Integer> numSet = new HashSet<>();
        for (int i = 0; i < n; i++) {
            numSet.add(sc.nextInt());
        }
        Set<Integer> twoTimesSet = new HashSet<>();
        for (int i : numSet) {
            for (int j = 1; j < 30; j++) {
                i /= 2;
                if (i % 2!= 0) {
                    twoTimesSet.add(j);
                    break;
                }
            }
            if (twoTimesSet.size()!= 1) {
                System.out.println(0);
                return;
            }
        }
        int[] numList = new int[numSet.size()];
        int index = 0;
        for (int i : numSet) {
            numList[index++] = i;
        }
        int lcm = numList[0];
        for (int i = 1; i < numList.length; i++) {
            lcm = lcm * numList[i] / gcd(lcm, numList[i]);
        }
        System.out.println((num - lcm / 2) / lcm + 1);
    }

    public static int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
}