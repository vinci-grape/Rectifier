int n = Integer.parseInt(scanner.nextLine());
String[] input = scanner.nextLine().split(" ");
List<Integer> list = new ArrayList<>();
for (String s : input) {
    list.add(Integer.parseInt(s) % 2);
}
if (Collections.frequency(list, 1) == 1) {
    System.out.println(list.indexOf(1) + 1);
} else {
    System.out.println(list.indexOf(0) + 1);
}