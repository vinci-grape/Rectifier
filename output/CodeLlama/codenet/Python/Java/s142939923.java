Scanner sc = new Scanner(System.in);
int a = sc.nextInt();
int b = sc.nextInt();

// A + B
int x = a + b;
// A - B
int y = a - b;
// A * B
int z = a * b;

// Print the maximum of three integers
System.out.println(Math.max(Math.max(x, y), z));