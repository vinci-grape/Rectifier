import java.util.*;

public class atcoder_AGC004_D {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] height = new int[10];
        int k = 1;
        for (int i = 0; i < 10; i++) {
            height[i] = scanner.nextInt();
        }
        int n = height.length;
        int[] links = new int[n];
        for (int i = 0; i < n; i++) {
            if (height[i]!= 0) {
                links[i] = i;
            }
        }
        int height_from_leaf = 0;
        int cut_count = 0;
        for (int i = 0; i < n; i++) {
            if (links[i] == 0) continue;
            int hgt = 0;
            int cut = 0;
            for (int j = 0; j < n; j++) {
                if (links[j] == i) {
                    hgt++;
                }
                if (links[j] == 0) {
                    cut++;
                }
            }
            height_from_leaf = Math.max(height_from_leaf, hgt);
            cut_count += cut;
        }
        height_from_leaf++;
        if (k!= 0 && height_from_leaf == k) {
            height_from_leaf = 0;
            cut_count++;
        }
        System.out.println(height_from_leaf + cut_count);
    }
}