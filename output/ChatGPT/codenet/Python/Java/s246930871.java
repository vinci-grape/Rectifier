int N, A, B;
Scanner scanner = new Scanner(System.in);
N = scanner.nextInt();
A = scanner.nextInt();
B = scanner.nextInt();
int ans = A * (N/(A+B)) + Math.min(A, N%(A+B));
System.out.println(ans);