int x, y;
Scanner scanner = new Scanner(System.in);
x = scanner.nextInt();
y = scanner.nextInt();
System.out.println(Math.max(x + y - 3 + ((y - x) % 3 > 0), 0));