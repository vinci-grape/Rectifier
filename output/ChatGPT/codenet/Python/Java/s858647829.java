int a = Integer.parseInt(sc.next());
int b = Integer.parseInt(sc.next());

if (a % 3 == 0 || b % 3 == 0 || (a + b) % 3 == 0) {
    System.out.println("Possible");
} else {
    System.out.println("Impossible");
}