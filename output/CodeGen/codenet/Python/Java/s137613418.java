import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] A = new int[n];
        for (int A_i = 0; A_i < n; A_i++) {
            A[A_i] = in.nextInt();
        }
        int[] ans = new int[n];
        for (int i = 0; i < n; i++) {
            ans[i] = i;
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (A[i] > A[j]) {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (A[i] == A[j]) {
                    int temp = ans[i];
                    ans[i] = ans[j];
                    ans[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (ans[i]!= i) {
                for (int j = i + 1; j < n; j++) {
                    if (ans[j] == i) {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
            }
        }
        for (int i