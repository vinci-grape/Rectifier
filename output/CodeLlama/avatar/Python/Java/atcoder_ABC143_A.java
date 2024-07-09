Scanner sc = new Scanner(System.in);
int A = sc.nextInt();
int B = sc.nextInt();
int ans = A - 2 * B;
if (ans < 0) {
    ans = 0;
}
System.out.println(ans);