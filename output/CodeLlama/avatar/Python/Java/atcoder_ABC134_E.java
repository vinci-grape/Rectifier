public static int binarySearch(int key) {
    int bad = -1, good = ans.size();
    while (good - bad > 1) {
        int mid = (bad + good) / 2;
        if (ans.get(mid).get(ans.get(mid).size() - 1) < key) {
            good = mid;
        } else {
            bad = mid;
        }
    }
    return good;
}

public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
    for (int i = 0; i < N; i++) {
        int A = sc.nextInt();
        int idx = binarySearch(A);
        if (idx == ans.size()) {
            ArrayList<Integer> temp = new ArrayList<>();
            temp.add(A);
            ans.add(temp);
        } else {
            ans.get(idx).add(A);
        }
    }
    System.out.println(ans.size());
}