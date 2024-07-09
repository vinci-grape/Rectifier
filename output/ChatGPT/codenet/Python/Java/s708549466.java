int N, x;
Scanner sc = new Scanner(System.in);
N = sc.nextInt();
x = sc.nextInt();
int[] a = new int[N];
for (int i = 0; i < N; i++) {
    a[i] = sc.nextInt();
}
int cnt = 0;
for (int i = 1; i < N; i++) {
    int tmp = a[i - 1] + a[i];
    if (tmp > x) {
        if (tmp - x > a[i]) {
            a[i - 1] = tmp - a[i] - x;
            a[i] = 0;
        } else {
            a[i] = a[i] - (tmp - x);
        }
        cnt += tmp - x;
    }
}
System.out.println(cnt);