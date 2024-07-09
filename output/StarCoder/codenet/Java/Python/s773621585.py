import java.util.HashMap;
import java.util.Scanner;

public class Main
{
	public static void main(String[] args)
	{
		HashMap<String, String> map = new HashMap<String, String>();
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String str= sc.nextLine();
		for (int i=0; i<n; i++) {
			map.put(sc.nextLine(),"");
		}
		sc.close();

		System.out.println(map.size());
	}
}