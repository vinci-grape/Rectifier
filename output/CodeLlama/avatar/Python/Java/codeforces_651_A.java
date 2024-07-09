Scanner sc = new Scanner(System.in);
int x = sc.nextInt();
int y = sc.nextInt();
System.out.println(Math.max(x + y - 3 + (y - x) % 3 > 0 ? 1 : 0, 0));