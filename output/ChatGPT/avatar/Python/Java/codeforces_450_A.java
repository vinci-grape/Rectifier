int n, m;
Scanner scanner = new Scanner(System.in);
n = scanner.nextInt();
m = scanner.nextInt();
int[] l = new int[n];
for (int i = 0; i < n; i++) {
    l[i] = scanner.nextInt();
}
List<Integer> l2 = new ArrayList<Integer>();
for (int i : l) {
    if (i % m == 0) {
        l2.add(i / m);
    } else {
        l2.add(i / m + 1);
    }
}
int mx = Collections.max(l2);
int ind = 0;
for (int i = 0; i < n; i++) {
    if (l2.get(i) == mx) {
        ind = i;
        break;
    }
}
System.out.println(ind + 1);