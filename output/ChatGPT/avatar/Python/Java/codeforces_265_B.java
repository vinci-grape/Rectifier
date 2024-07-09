int n = Integer.parseInt (scanner.nextLine());
ArrayList<Integer> l = new ArrayList<>();
for (int i = 0; i < n; i++) {
    l.add(Integer.parseInt(scanner.nextLine()));
}
int ans = n - 1;
int last = 0;
for (int i : l) {
    ans += Math.abs(last - i) + 1;
    last = i;
}
System.out.println(ans);