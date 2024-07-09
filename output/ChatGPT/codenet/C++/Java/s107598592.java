import java.util.*;

public class s107598592 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        ArrayList<Integer> X = new ArrayList<>();
        ArrayList<Integer> Y = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            X.add(sc.nextInt());
            Y.add(X.get(i));
        }

        Collections.sort(Y);

        int y = Y.get(N / 2);
        for (int i = 0; i < N; i++) {
            if (X.get(i) < Y.get(N / 2)) {
                System.out.println(Y.get(N / 2));
            } else {
                System.out.println(Y.get(N / 2 - 1));
            }
        }
    }
}