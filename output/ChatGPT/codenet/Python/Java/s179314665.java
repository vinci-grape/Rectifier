int A, B;
Scanner scanner = new Scanner(System.in);
A = scanner.nextInt();
B = scanner.nextInt();
if (A < 10 && B < 10) {
  System.out.println(A*B);
} else {
  System.out.println(-1);
}