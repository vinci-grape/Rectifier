int n = Integer.parseInt(scanner.nextLine());
String[] inputArray = scanner.nextLine().split(" ");
int[] a = new int[n];
for(int i=0; i<n; i++) {
    a[i] = Integer.parseInt(inputArray[i]);
}
if (Arrays.stream(a).sum() % (n * (n + 1) / 2) != 0) {
    System.out.println("NO");
} else {
    int k = Arrays.stream(a).sum() / (n * (n + 1) / 2);
    int[] extendedArray = new int[n+1];
    System.arraycopy(a, 0, extendedArray, 0, n);
    extendedArray[n] = a[0];
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 1; i <= n; i++) {
        sum1 += (k - extendedArray[i] + extendedArray[i-1]) % n;
        sum2 += (k - extendedArray[i] + extendedArray[i-1]) / n >= 0 ? 1 : 0;
    }
    if (sum1 != 0 || sum2 != n) {
        System.out.println("NO");
    } else {
        System.out.println("YES");
    }
}