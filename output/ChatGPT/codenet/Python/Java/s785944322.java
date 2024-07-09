int a = Integer.parseInt(input.readLine());
int b = Integer.parseInt(input.readLine());

if (a >= 13) {
    System.out.println(b);
} else if (a >= 6) {
    System.out.println(b/2);
} else {
    System.out.println(0);
}