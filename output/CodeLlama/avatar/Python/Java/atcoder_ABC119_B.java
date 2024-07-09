Scanner sc = new Scanner(System.in);
int N = sc.nextInt();
double[] x = new double[N];
for (int i = 0; i < N; i++) {
    x[i] = sc.nextDouble();
}
double sum = 0;
for (int i = 0; i < N; i++) {
    sum += x[i];
}
System.out.println(sum);