import java.util.*;
public class s814403222 {
  public static void main(String[] args){
    Scanner cin = new Scanner(System.in);
    while(cin.hasNext()){
      int n = cin.nextInt();
      if(n == 0) break;
      int m;
      for(int i = 0; i < 33; i++) d[i].clear();
      for(int i = 0; i < n; i++){
	v[i].first = 0;
	cin.next();
	m = cin.nextInt();
	for(int j = 0; j < m; j++){
	  int a = cin.nextInt();
	  v[i].first += n - d[a].size();
	  for(int k = 0; k < d[a].size(); k++){
	    v[d[a][k]].first--;
	  }
	  d[a].add(i);
	}
      }
      Arrays.sort(v,new Comparator<P>(){
	public int compare(P a, P b){
	  return a.first - b.first;
	}
      });
      System.out.println(v[0].first + " " + v[0].second);
    }
  }
}