import java.util.Scanner;
import java.io.*;

public class s102850254 {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        int d = in.nextInt();
        int n = in.nextInt();
        in.nextLine();
        String[][] map = new String[n+2][n+2];
        for(int i=0;i<=n+1;i++){
            map[i] = in.nextLine().split(" ");
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                map[i][j] = map[i][j].charAt(0);
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i][j] = ".";
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i][j] = ".";
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i][j] = ".";
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i][j] = ".";
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i][j] = ".";
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i][j] = ".";
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i][j] = ".";
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i][j] = ".";
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                System.out.print(map[i][j]);
            }
            System.out.println();
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<map[i].length-1;j++){
                if(map[i][j].equals("#")) map[i