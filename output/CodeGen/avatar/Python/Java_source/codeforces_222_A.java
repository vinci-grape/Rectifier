public class codeforces_222_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] elems = new int[n];
        for (int i = 0; i < n; i++) {
            elems[i] = in.nextInt();
        }
        boolean allSame = true;
        for (int i = 0; i < n; i++) {
            if (elems[i]!= elems[0]) {
                allSame = false;
                break;
            }
        }
        if (allSame) {
            System.out.println(0);
            return;
        }
        if (k == 1) {
            System.out.println(-1);
            return;
        }
        if (!allSame) {
            System.out.println(-1);
            return;
        }
        int target = elems[0];
        int[] toDelete = new int[k - 1];
        for (int i = 0; i < k - 1; i++) {
            toDelete[i] = elems[i];
        }
        while (toDelete.length > 0 && toDelete[toDelete.length - 1] == target) {
            toDelete.pop();
        }
        System.out.println(toDelete.length);
    }
}