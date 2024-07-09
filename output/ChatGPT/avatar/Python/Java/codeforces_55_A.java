int n = Integer.parseInt (scanner.nextLine());
while (n % 2 == 0) {
    n /= 2;
}
if (n == 1) {
    System.out.println("YES");
} else {
    System.out.println("NO");
}