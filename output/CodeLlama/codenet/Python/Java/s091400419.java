Scanner sc = new Scanner(System.in);
int a = sc.nextInt();
int b = sc.nextInt();
int[] lst = {a+b, a-b, a*b};
System.out.println(Collections.max(Arrays.asList(lst)));