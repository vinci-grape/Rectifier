int a = input.nextInt();
int b = input.nextInt();
if (a == b) {
    System.out.println(a + b);
} else {
    System.out.println(Math.max(a, b) * 2 - 1);
}