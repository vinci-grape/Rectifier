Scanner sc=new Scanner(System.in);
int a=sc.nextInt();
int b=sc.nextInt();
System.out.println(a==b?a+b:(a>b?a*2-1:b*2-1));