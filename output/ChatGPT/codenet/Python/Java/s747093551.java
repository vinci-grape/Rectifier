int N, M, X, Y;
Scanner scanner = new Scanner(System.in);
N = scanner.nextInt();
M = scanner.nextInt();
X = scanner.nextInt();
Y = scanner.nextInt();

int[] x = new int[N];
for (int i = 0; i < N; i++) {
    x[i] = scanner.nextInt();
}

int[] y = new int[M];
for (int i = 0; i < M; i++) {
    y[i] = scanner.nextInt();
}

if (Math.max(Math.max(x), X) < Math.min(Math.min(y), Y)) {
    System.out.println("No War");
} else {
    System.out.println("War");
}