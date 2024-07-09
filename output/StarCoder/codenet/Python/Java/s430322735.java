import java.util.*;
public class s430322735 {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String[] lst = new String[n];
		int pair = 0;
		for(int i = 0; i < n; i++){
			String st = sc.next();
			lst[i] = st;
		}
		Arrays.sort(lst);
		String pre = "";
		int tmp_cnt = 0;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(lst[i].equals(pre)){
				tmp_cnt++;
			}
			else{
				cnt += tmp_cnt + 1;
				tmp_cnt = 0;
			}
			pre = lst[i];
		}
		System.out.println(cnt);
	}
}