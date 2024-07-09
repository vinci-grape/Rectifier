import java.util.Scanner;

public class codeforces_189_A {
    public static void main(String[] args) {
        cutRibbon();
    }

    public static void cutRibbon() {
        Scanner scanner = new Scanner(System.in);
        String[] input = scanner.nextLine().split(" ");
        int length = Integer.parseInt(input[0]);
        int[] arr = new int[3];

        for (int i = 1; i < 4; i++) {
            arr[i-1] = Integer.parseInt(input[i]);
        }

        int[] sortedArr = sortArray(arr);
        int ans = 0;

        if (length % sortedArr[0] == 0) {
            System.out.println(length / sortedArr[0]);
            return;
        }

        if (sortedArr[0] == sortedArr[1]) {
            int k = 0;
            for (int i = 0; i <= length / sortedArr[2]; i++) {
                int check = length - i * sortedArr[2];
                if (check >= 0 && check % sortedArr[0] == 0) {
                    k = check / sortedArr[0];
                    ans = Math.max(ans, k + i);
                }
            }
        } else {
            int k = 0;
            for (int i = 0; i <= length / sortedArr[2]; i++) {
                for (int j = 0; j <= length / sortedArr[1]; j++) {
                    int check = length - i * sortedArr[2] - j * sortedArr[1];
                    if (check >= 0 && check % sortedArr[0] == 0) {
                        k = check / sortedArr[0];
                        ans = Math.max(ans, k + i + j);
                    }
                }
            }
        }

        System.out.println(ans);
    }

    public static int[] sortArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }
}