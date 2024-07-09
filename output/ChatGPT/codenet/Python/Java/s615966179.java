int n, a, b;
Scanner scanner = new Scanner(System.in);
n = scanner.nextInt();
a = scanner.nextInt();
b = scanner.nextInt();
int ans = n / (a + b) * a;
int r = Math.min(n % (a + b), a);
ans += r;
System.out.println(ans);