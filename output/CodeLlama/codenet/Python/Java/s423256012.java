Scanner sc = new Scanner(System.in);
int a = sc.nextInt();
int b = sc.nextInt();
if((a+b)%2==1){
	System.out.println("IMPOSSIBLE");
}
else{
	System.out.println((a+b)/2);
}