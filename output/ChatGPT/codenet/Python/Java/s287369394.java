int N = Integer.parseInt(scanner.nextLine());
int[] A = Arrays.stream(scanner.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
int[] B = Arrays.stream(scanner.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();

int ans = 0;
for (int i = 0; i < N; i++) {
    int d = Math.min(A[i], B[i]);
    ans += d;
    A[i] -= d;
    B[i] -= d;
    d = Math.min(A[i + 1], B[i]);
    ans += d;
    A[i + 1] -= d;
    B[i] -= d;
}

System.out.println(ans);