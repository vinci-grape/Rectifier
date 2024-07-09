int x, y, a, b;
Scanner scanner = new Scanner(System.in);
x = scanner.nextInt();
y = scanner.nextInt();
a = scanner.nextInt();
b = scanner.nextInt();
List<Pair<Integer, Integer>> games = new ArrayList<>();

for (int i = a; i <= x; i++) {
    if (i <= b) continue;
    else {
        for (int j = b; j <= y; j++) {
            if (i > j) {
                games.add(new Pair<>(i, j));
            }
        }
    }
}

System.out.println(games.size());
for (Pair<Integer, Integer> game : games) {
    System.out.println(game.getFirst() + " " + game.getSecond());
}