int A = scanner.nextInt();
int B = scanner.nextInt();
String S = scanner.next();
if (S.charAt(A) == '-' && S.chars().filter(ch -> ch == '-').count() == 1) {
    System.out.println("Yes");
} else {
    System.out.println("No");
}