int A = scanner.nextInt();
int B = scanner.nextInt();
int C = scanner.nextInt();

System.out.println(Math.max(10*A+B+C, Math.max(10*B+C+A, 10*C+A+B)));