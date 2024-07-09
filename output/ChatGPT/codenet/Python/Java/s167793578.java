int N, M;
Scanner scanner = new Scanner(System.in);
N = scanner.nextInt();
M = scanner.nextInt();

int a = N * (N - 1) / 2;
int b = M * (M - 1) / 2;

System.out.println(a + b);