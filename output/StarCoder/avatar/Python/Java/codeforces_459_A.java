import java.util.*;
public class codeforces_459_A {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] line = sc.nextLine().split(" ");
        int x1 = Integer.parseInt(line[0]);
        int y1 = Integer.parseInt(line[1]);
        int x2 = Integer.parseInt(line[2]);
        int y2 = Integer.parseInt(line[3]);
        int d = (int)Math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        if(x2-x1==0){
            System.out.println(x1+" "+(y1+d)+" "+x2+" "+(y2+d));
        }
        else if(y2-y1==0){
            System.out.println((x1+d)+" "+y1+" "+(x2+d)+" "+y2);
        }
        else if(x2-x1==y2-y1){
            System.out.println((x1+d)+" "+y1+" "+(x2+d)+" "+y2);
        }
        else if(x2-x1==-y2+y1){
            System.out.println((x1-d)+" "+y1+" "+(x2-d)+" "+y2);
        }
        else if(x2-x1==y2+y1){
            System.out.println((x1+d)+" "+(y1-d)+" "+(x2+d)+" "+(y2-d));
        }
        else if(x2-x1==-y2-y1){
            System.out.println((x1-d)+" "+(y1-d)+" "+(x2-d)+" "+(y2-d));
        }
        else{
            System.out.println("-1");
        }
    }
}

