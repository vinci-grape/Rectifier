int a, b;
Scanner scanner = new Scanner(System.in);
a = scanner.nextInt();
b = scanner.nextInt();
System.out.print(Math.min(a, b) + " " + (Math.max(a, b) - Math.min(a, b)) / 2);