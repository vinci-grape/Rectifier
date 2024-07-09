import java.util.Scanner;
public class codeforces_313_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String soz = sc.nextLine();
        int[] a = new int[soz.length() + 1];
        for (int i = 1; i < soz.length(); i++) {
            a[i] = a[i - 1];
            if (soz.charAt(i - 1) == soz.charAt(i)) {
                a[i] += 1;
            }
        }
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            String[] s = sc.nextLine().split(" ");
            arr[i] = a[Integer.parseInt(s[1]) - 1] - a[Integer.parseInt(s[0]) - 1];
        }
        for (int i : arr) {
            System.out.println(i);
        }
    }
}