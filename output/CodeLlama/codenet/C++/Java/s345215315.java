import java.io.*;
import java.util.*;

public class s345215315 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] str = br.readLine().split(" ");
        int h = Integer.parseInt(str[0]);
        int w = Integer.parseInt(str[1]);
        int[] dx = {0,1,0,-1,1,1,-1,-1};
        int[] dy = {1,0,-1,0,1,-1,1,-1};
        char[][] s = new char[h][w];
        int sx = 0, sy = 0;
        for(int i=0;i<h;i++){
            s[i] = br.readLine().toCharArray();
            for(int j=0;j<w;j++){
                if(s[i][j] == 'O'){
                    sx = i;
                    sy = j;
                    s[i][j] = '.';
                }
            }
        }
        int ans = Integer.MAX_VALUE;
        dfs(sx,sy,0);
        if(ans == Integer.MAX_VALUE)System.out.println(-1);
        else System.out.println(ans);
    }
    public static void dfs(int x, int y, int cnt){
        if(cnt > 20)return;
        //System.out.println(x + " " + y + " " + cnt);
        //for(int i=0;i<h;i++)System.out.println(s[i]);
        if(x == h-1){
            ans = Math.min(ans,cnt);
            return;
        }
        for(int i=0;i<8;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= h || ny < 0 || ny >= w)continue;
            if(s[nx][ny] != 'X')continue;
            boolean c = true;
            while(c && s[nx][ny] == 'X'){
                s[nx][ny] = '.';
                nx += dx[i];
                ny += dy[i];
                if(nx < 0 || nx >= h || ny < 0 || ny >= w){
                    if(nx >= h)ans = Math.min(ans, cnt+1);
                    c = false;
                }
            }
            if(c)dfs(nx,ny,cnt+1);
            while(nx != x || ny != y){
                nx -= dx[i];
                ny -= dy[i];
                s[nx][ny] = 'X';
            }
            s[x][y] = '.';
        }
    }
}