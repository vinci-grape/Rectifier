Scanner sc = new Scanner(System.in);
int n, m;
n = sc.nextInt();
m = sc.nextInt();
int q = n / m;
int r = n % m;
int[] a = new int[m];
for (int i = 0; i < m; i++) {
    a[i] = q;
}
for (int i = 0; i < r; i++) {
    a[i]++;
}
for (int i = 0; i < m; i++) {
    System.out.print(a[i] + " ");
}