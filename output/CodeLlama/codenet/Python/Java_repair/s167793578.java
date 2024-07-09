Scanner sc = new Scanner(System.in);

int N = sc.nextInt();
int M = sc.nextInt();

int a = N * (N - 1) / 2;
int b = M * (M - 1) / 2;

System.out.println(a + b);