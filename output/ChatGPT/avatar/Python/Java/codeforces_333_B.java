int n, m;
Scanner sc = new Scanner(System.in);
n = sc.nextInt();
m = sc.nextInt();
int[] b = new int[n*2];
Arrays.fill(b, 1);
b[0] = b[n-1] = b[n] = b[2*n-1] = 0;
for (int i = 0; i < m; i++) {
    int r = sc.nextInt();
    int c = sc.nextInt();
    b[r-1] = b[n+c-1] = 0;
}
if (n % 2 == 1 && b[n/2] == 1 && b[n+n/2] == 1) {
    b[n/2] = 0;
}
int sum = 0;
for (int i = 0; i < b.length; i++) {
    sum += b[i];
}
System.out.println(sum);