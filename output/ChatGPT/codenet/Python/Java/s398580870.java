int n, k;
Scanner scanner = new Scanner(System.in);
n = scanner.nextInt();
k = scanner.nextInt();

if(k % 2 == 1){
    System.out.println((int) Math.pow(n/k, 3));
}
else{
    System.out.println((int) (Math.pow(n/k, 3) + Math.pow((n+k/2)/k, 3)));
}