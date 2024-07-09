n, m, x = (int(i) for i in input().split());
a = new int[n];
String[] input = input().split();
for (int i = 0; i < n; i++) {
    a[i] = Integer.parseInt(input[i]);
}
int ans = 0;
int i = Arrays.binarySearch(a, x) + 1;
System.out.println(Math.min(i, n - i));