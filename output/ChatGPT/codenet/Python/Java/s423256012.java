int A, B;
Scanner scanner = new Scanner(System.in);
A = scanner.nextInt();
B = scanner.nextInt();

if ((A + B) % 2 == 1) {
    System.out.println("IMPOSSIBLE");
} else {
    System.out.println((A + B) / 2);
}