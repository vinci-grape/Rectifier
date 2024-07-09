int n = Integer.parseInt(scanner.nextLine());
int[] a = new int[n];
String[] temp = scanner.nextLine().split(" ");
for (int i = 0; i < n; i++) {
    a[i] = Integer.parseInt(temp[i]);
}

int m1 = 0;
for (int i = 0; i < n; i++) {
    m1 += a[i] * (Math.pow(-1, i));
}
m1 /= 2;

String result = Integer.toString(m1);

int[] m = new int[n];
m[0] = m1;
for (int i = 1; i < n; i++) {
    m[i] = a[i-1] - m[i-1];
}

for (int i = 0; i < n; i++) {
    m[i] *= 2;
}

System.out.println(String.join(" ", Arrays.stream(m).mapToObj(Integer::toString).toArray(String[]::new)));