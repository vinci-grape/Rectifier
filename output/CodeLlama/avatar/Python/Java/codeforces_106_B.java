import java.util.*;
public class codeforces_106_B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] input_array = new int[n][4];
        for (int i = 0; i < n; i++) {
            input_array[i][0] = sc.nextInt();
            input_array[i][1] = sc.nextInt();
            input_array[i][2] = sc.nextInt();
            input_array[i][3] = sc.nextInt();
        }
        int[][] outdated = new int[n][4];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (input_array[i][0] < input_array[j][0] && input_array[i][1] < input_array[j][1] && input_array[i][2] < input_array[j][2]) {
                    outdated[i][0] = input_array[i][0];
                    outdated[i][1] = input_array[i][1];
                    outdated[i][2] = input_array[i][2];
                    outdated[i][3] = input_array[i][3];
                }
            }
        }
        int minimum_cost = 100000;
        int input_number = 0;
        for (int i = 0; i < n; i++) {
            if (input_array[i][3] < minimum_cost) {
                minimum_cost = input_array[i][3];
                input_number = i + 1;
            }
        }
        System.out.println(input_number);
    }
}