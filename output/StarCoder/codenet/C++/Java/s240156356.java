import java.util.*;

public class s240156356 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.next();
        String str2 = sc.next();

        char[] ch1 = str1.toCharArray();
        char[] ch2 = str2.toCharArray();

        Arrays.sort(ch1);
        Arrays.sort(ch2);

        int loop = ch1.length > ch2.length? ch2.length : ch1.length;
        boolean flag = false;

        for (int i = 0; loop > i; i++) {
            char c1 = ch1[i];
            char c2 = ch2[i];

            if (c1 == c2) {
                if (loop == i + 1 && ch1.length < ch2.length) {
                    flag = true;
                    break;
                } else {
                    continue;
                }
            } else {
                if (c2 > c1) {
                    flag = true;
                    break;
                } else {
                    break;
                }
            }
        }

        if (flag) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}