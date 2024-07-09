int A, B;
Scanner scanner = new Scanner(System.in);
A = scanner.nextInt();
B = scanner.nextInt();
int ans = A - 2 * B;
if (ans < 0) {
    ans = 0;
}
System.out.println(ans);