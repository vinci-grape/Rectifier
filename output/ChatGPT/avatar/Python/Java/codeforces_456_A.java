int n = Integer.parseInt(scanner.nextLine());
List<int[]> m = new ArrayList<>();
for (int i = 0; i < n; i++) {
    String[] input = scanner.nextLine().split(" ");
    int[] row = new int[input.length];
    for (int j = 0; j < input.length; j++) {
        row[j] = Integer.parseInt(input[j]);
    }
    m.add(row);
}
Collections.sort(m, new Comparator<int[]>() {
    @Override
    public int compare(int[] a, int[] b) {
        return Integer.compare(b[0], a[0]);
    }
});
int[] a = m.get(0);
for (int i = 1; i < m.size(); i++) {
    int[] current = m.get(i);
    if (current[1] > a[1]) {
        System.out.println("Happy Alex");
        break;
    }
    a = current;
}
if (m.size() == 1 || m.size() == 0) {
    System.out.println("Poor Alex");
}