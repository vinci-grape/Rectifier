int A, B;
Scanner scanner = new Scanner(System.in);
A = scanner.nextInt();
B = scanner.nextInt();

int min = B * 10;
int max = (B+1) * 10 -1;

int ans = -1;
for (int i = min; i <= max; i++) {
  if (i * 0.08 == A) {
    ans = i;
    break;
  }
}

System.out.println(ans);