Scanner sc = new Scanner(System.in);
int N = sc.nextInt();
int K = sc.nextInt();
Set<Integer> S = new HashSet<>();
for (int i = 0; i < K; i++) {
    int d = sc.nextInt();
    int[] A = new int[d];
    for (int j = 0; j < d; j++) {
        A[j] = sc.nextInt();
    }
    S.addAll(Arrays.asList(A));
}
System.out.println(N - S.size());