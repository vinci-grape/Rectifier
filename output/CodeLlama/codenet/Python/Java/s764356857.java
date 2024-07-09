Scanner sc = new Scanner(System.in);
int A = sc.nextInt();
int B = sc.nextInt();

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