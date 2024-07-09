import java.util.*; 
public class s531853923
{ 
    public static void main(String[] args) 
    { 
        Scanner sc = new Scanner(System.in); 
        int a = sc.nextInt(); 
        int b = sc.nextInt(); 
        int c = sc.nextInt(); 
        int d = sc.nextInt(); 
        if (a*b%2==1&&(c+d)%2==1)
        {
            System.out.println("No");
        }
        else
        {
            System.out.println("Yes");
        }
    } 
}