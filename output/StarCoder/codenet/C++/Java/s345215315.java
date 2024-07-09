import java.util.*;
import java.io.*;

public class s345215315 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = 19,w = 15;
        int dx[] = {0,1,0,-1,1,1,-1,-1};
        int dy[] = {1,0,-1,0,1,-1,1,-1};
        String s[] = new String[19];
        int ans = Integer.MAX_VALUE;
        for(int i = 0;i < h;i++)s[i] = sc.next();
        int sx,sy;
        for(int i = 0;i < h;i++){
            for(int j = 0;j < w;j++){
                if(s[i].charAt(j) == 'O'){
                    sx = i;
                    sy = j;
                    s[i] = s[i].substring(0,j) + "." + s[i].substring(j+1);
                    break;
                }
            }
        }
        dfs(s,sx,sy,0,ans);
        if(ans == Integer.MAX_VALUE)System.out.println(-1);
        else System.out.println(ans);
    }
    public static void dfs(String s[][],int x,int y,int cnt,int ans){
        if(cnt > 20)return;
        if(x == 18){
            ans = Math.min(ans,cnt);
            return;
        }
        for(int i = 0;i < 8;i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= 19 || ny < 0 || ny >= 15)continue;
            if(s[nx][ny]!= 'X')continue;
            boolean c = true;
            while(c && s[nx][ny] == 'X'){
                s[nx][ny] = '.';
                nx += dx[i];
                ny += dy[i];
                if(nx < 0 || nx >= 19 || ny < 0 || ny >= 15){
                    if(nx >= 19)ans = Math.min(ans, cnt+1);
                    c = false;
                }
            }
            if(c)dfs(s,nx,ny,cnt+1,ans);
            while(nx!= x || ny!= y){
                nx -= dx[i];
                ny -= dy[i];
                s[nx][ny] = 'X';
            }
            s[x][y] = '.';
        }
    }
}