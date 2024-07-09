import java.util.*;
import java.lang.*;
import java.io.*;

public class s876796799
{
	public static void main (String[] args) throws java.lang.Exception{
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int a[] = new int[N];
		int ind_a[] = new int[N];
		for(int i = 0; i < N; i++){
			a[i] = sc.nextInt();
		}
		for(int i = 0; i < N; i++){
			ind_a[a[i] - 1] = i;
		}
		
		Set <Integer> used_inds = new HashSet<Integer>();
		long ans = 0;
		for(int i = 0; i < N; i++){
			int left_border;
			int right_border;
			int cur_ind = ind_a[i];
			Iterator<Integer> left_it = used_inds.tailSet(cur_ind).iterator();
			Iterator<Integer> right_it = used_inds.tailSet(cur_ind + 1).iterator();
			
			if(left_it.hasNext()){
				left_border = left_it.next();
			} else {
				left_border = -1;
			}
			if(right_it.hasNext()){
				right_border = right_it.next();
			} else {
				right_border = N;
			}
			ans += (cur_ind - left_border) * (right_border - cur_ind) * ((long)i + 1);
			
			//System.out.println(i + " " + left_border + " " + right_border);
			//System.out.println(ans);
			
			used_inds.add(cur_ind);
		}
		
		System.out.println(ans);
	}
}