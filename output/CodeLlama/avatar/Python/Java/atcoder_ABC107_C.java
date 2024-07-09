import java.util.Scanner;

public class atcoder_ABC107_C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int K = sc.nextInt();
        int[] arr = new int[N];
        int[] arr_p = new int[N];
        int[] arr_m = new int[N];
        int p = 0;
        int m = 0;
        int x = 0;
        int y = N - 1;
        int lastx = 0;
        int lasty = N - 1;
        for (int i = 0; i < N; i++) {
            arr[i] = sc.nextInt();
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] == 0) {
                K--;
            }
            if (arr[i] > 0) {
                arr_p[i] = arr[i];
            } else {
                arr_m[i] = arr[i];
            }
        }

        for (int i = 0; i < N; i++) {
            if (arr[i] > 0) {
                lastx++;
            } else if (arr[i] < 0) {
                lasty--;
            }
        }

        for (int i = 0