int a = sc.nextInt();
int b = sc.nextInt();

// A + B
int x1 = a + b;
// A - B
int x2 = a - b;
// A * B
int x3 = a * b;
System.out.println(Math.max(x1, Math.max(x2, x3)));