import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        
        
        
        
        Scanner sc = new Scanner(System.in);
		String S= sc.next();
		
		
		String begin;
		String end;
		String answer;
		
		for(int i=0;i<S.length();i++){
		    
		    for(int j=0;j<S.length();j++){
		        
		        begin= S.substring(0,i);
		        end = S.substring(j,S.length());
		        answer =begin+end;
		        
		        
		        if(answer.equals("keyence")){
		            System.out.println("YES");
		            return;
		            
		        }else if(begin.equals("keyence")){
		            System.out.println("YES");
		            return;
		            
		        }else if(end.equals("keyence")){
		            System.out.println("YES");
		            return;
		            
		        }
		    }
		    
		    
		}
		System.out.println("NO");
		
		
	}
}