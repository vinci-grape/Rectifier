int n = Integer.parseInt(scanner.nextLine());
int[] a = Arrays.stream(scanner.nextLine().split(" ")).mapToInt(Integer::parseInt).toArray();
int[] b = new int[n];
for (int i = 0; i < n; i++) {
    b[a[i] - 1] = i;
}
int res = 0;
for (int i = 1; i < n; i++) {
    res += Math.abs(b[i] - b[i - 1]);
}
System.out.println(res);