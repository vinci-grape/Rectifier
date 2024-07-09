import java.util.*;
import java.io.*;

public class codeforces_299_A {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Custom input functions
        int num_inp() throws IOException {
            return Integer.parseInt(br.readLine());
        }

        int[] arr_inp() throws IOException {
            String[] input = br.readLine().split(" ");
            int[] arr = new int[input.length];
            for (int i = 0; i < arr.length; i++) {
                arr[i] = Integer.parseInt(input[i]);
            }
            return arr;
        }

        int[] sp_inp() throws IOException {
            String[] input = br.readLine().split(" ");
            int[] arr = new int[input.length];
            for (int i = 0; i < arr.length; i++) {
                arr[i] = Integer.parseInt(input[i]);
            }
            return arr;
        }

        // Actual code logic
        int[] a = Arrays.stream(br.readLine().split(" ")).skip(1).mapToInt(Integer::parseInt).sorted().toArray();
        System.out.println((a[0] != 0 && Arrays.stream(a).anyMatch(x -> x % a[0] != 0)) ? -1 : a[0]);
    }
}