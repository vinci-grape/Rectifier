public class s800506321 {
	public static void main(String[] args) {
		int n,k,x,y,z;
		scanf("%d",&n);
		scanf("%d",&k);
		x=n/k;
		y=n%k;
		if(y!=0) {
			z=x+1-x;
		}
		else {
			z=x-x;
		}
		System.out.println(z);
	}
}