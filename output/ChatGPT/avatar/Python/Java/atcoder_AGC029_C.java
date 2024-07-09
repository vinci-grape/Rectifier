import random;
import java.util.*;

public class atcoder_AGC029_C {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<Integer> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            a.add(scanner.nextInt());
        }
        List<Integer> dp = new ArrayList<>();
        dp.add(a.get(0));
        for (int i = 1; i < n; i++) {
            if (a.get(i) <= dp.get(dp.size() - 1)) {
                dp = cut(dp, a.get(i));
            } else {
                dp.add(a.get(i));
            }
            boolean isAdded = false;
            for (int j = dp.size() - 1; j >= 0; j--) {
                if (dp.get(j) < k - 1) {
                    dp = cut(dp, dp.get(j) - 1);
                    dp.add(dp.get(j) + 1);
                    if (dp.get(dp.size() - 1) < a.get(i)) {
                        dp.add(a.get(i));
                    }
                    isAdded = true;
                    break;
                }
            }
            if (!isAdded) {
                System.out.println("False");
                return;
            }
        }
        System.out.println("True");
        return;
    }

    public static List<Integer> cut(List<Integer> array, int index) {
        if (index < 1) {
            return new ArrayList<>();
        }
        if (index <= array.get(0)) {
            List<Integer> result = new ArrayList<>();
            result.add(index);
            result.add(array.get(0));
            return result;
        }
        for (int i = array.size() - 1; i > 0; i--) {
            if (array.get(i - 1) < index) {
                return array.subList(0, i) + (index + array.subList(i, array.size()));
            }
        }
        return array;
    }

    public static boolean isPossible(int k) {
        List<Integer> dp = new ArrayList<>();
        dp.add(a.get(0));
        for (int a : a.subList(1, a.size())) {
            if (a <= dp.get(dp.size() - 1)) {
                dp = cut(dp, a);
            } else {
                dp.add(a);
            }
            boolean isAdded = false;
            for (int i = dp.size() - 1; i >= 0; i--) {
                if (dp.get(i) < k - 1) {
                    dp = cut(dp, dp.get(i) - 1) + (dp.get(i) + 1);
                    if (dp.get(dp.size() - 1) < a) {
                        dp.add(a);
                    }
                    isAdded = true;
                    break;
                }
            }
            if (!isAdded) {
                return false;
            }
        }
        return true;
    }

    public static int bis(int x, int y) {
        if (y == x + 1) {
            return y;
        } else if (isPossible((x + y) / 2)) {
            return bis(x, (x + y) / 2);
        } else {
            return bis((x + y) / 2, y);
        }
    }
}