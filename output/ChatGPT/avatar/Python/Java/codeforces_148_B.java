int princess = Integer.parseInt(scanner.nextLine());
int dragon = Integer.parseInt(scanner.nextLine());
int t = Integer.parseInt(scanner.nextLine());
int f = Integer.parseInt(scanner.nextLine());
int c = Integer.parseInt(scanner.nextLine());
if (dragon <= princess) {
    System.out.println(0);
    System.exit(0);
}
int result = 0;
int position = t * princess;
position += princess * position / (dragon - princess);
while (position < c) {
    result += 1;
    position += princess * position / dragon;
    position += princess * f;
    position += princess * position / (dragon - princess);
}
System.out.println(result);