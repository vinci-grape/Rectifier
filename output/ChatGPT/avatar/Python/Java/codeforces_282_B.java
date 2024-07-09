int firstline = Integer.parseInt(scanner.nextLine());
int total = 0;
List<Character> memory = new ArrayList<>();

for (int x = 0; x < firstline; x++) {
    String[] inputArray = scanner.nextLine().split(" ");
    int A = Integer.parseInt(inputArray[0]);
    int G = Integer.parseInt(inputArray[1]);

    if (total + A <= 500) {
        total += A;
        memory.add('A');
    } else {
        total -= G;
        memory.add('G');
    }
}

StringBuilder result = new StringBuilder();
for (char c : memory) {
    result.append(c);
}

System.out.println(result.toString());