Input Format:

The first line contains an integer T, the number of test cases.
The first line of each test case contains an integer N, the number of members.
The second line of each test case contains N space-separated integers, the number of each member.
The third line of each test case contains N space-separated integers, the number of each color.

Output Format:

For each test case, output the minimum and maximum number of colors needed.

Sample Input:

2
3
1 2 3
1 2 4
Sample Output:

1 2
1 2
Explanation:

For the first test case, the minimum number of colors is 1, and the maximum number of colors is 2.
For the second test case, the minimum number of colors is 1, and the maximum number of colors is 2.


import java.util.Scanner;

public class s964794058 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for(int a0 = 0; a0 < T; a0++){
            int N = in.nextInt();
            int[] mem = new int[N];
            int[] color = new int[N];
            for(int mem_i=0; mem_i < N; mem_i++){
                mem[mem_i] = in.nextInt();
            }
            for(int color_i=0; color_i < N; color_i++){
                color[color_i] = in.nextInt();
            }
            int minColor = 1;
            int maxColor = 0;
            for(int color_i=0; color_i < N; color_i++){
                if(color[color_i] % 400 == 0){
                    if(color[color_i] / 400 >= 8){
                        maxColor++;
                    }
                }
                else{
                    if(color[color_i] / 400 in color){
                        maxColor++;
                    }
                }
                if(color[color_i] % 400 == 0){
                    if(color[color_i] / 400 < 8){
                        minColor++;
                    }
                }
                else{
                    if(color[color_i] / 400 not in color){
                        minColor++;
                    }
                }
            }
            System.out.println(minColor + " " + maxColor);
        }
    }
}