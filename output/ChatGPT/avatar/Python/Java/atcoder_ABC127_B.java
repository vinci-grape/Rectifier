int r, D, x;
Scanner scanner = new Scanner(System.in);
String[] inputs = scanner.nextLine().split(" ");
r = Integer.parseInt(inputs[0]);
D = Integer.parseInt(inputs[1]);
x = Integer.parseInt(inputs[2]);
for (int i = 2; i < 12; i++) {
    System.out.println((int) (Math.pow(r, i - 1) * (x + D / (1 - r)) - D / (1 - r)));
}