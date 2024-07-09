Input Format:

The first line contains an integer, N, denoting the number of test cases.
The second line contains an integer, K, denoting the number of queries.
The third line contains N space-separated integers, denoting the score of each student.
The fourth line contains K space-separated integers, denoting the score of each teacher.

Output Format:

For each query, print Yes if the student is in the top K students, and No otherwise.

Sample Input:

2
2
1 2
1 3
Sample Output:

Yes
No
Explanation:

The student with score 1 is in the top 2 students, and the student with score 2 is in the top 2 students.
The student with score 3 is not in the top 2 students.


import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main (String[] args) {
        //code
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++){
            int n=sc.nextInt();
            int k=sc.nextInt();
            int[] score=new int[n];
            for(int j=0;j<n;j++){
                score[j]=sc.nextInt();
            }
            int[] usiro=new int[k];
            int[] mae=new int[k];
            for(int j=0;j<k;j++){
                usiro[j]=sc.nextInt();
            }
            for(int j=0;j<k;j++){
                mae[j]=sc.nextInt();
            }
            for(int j=0;j<n-k;j++){
                if(score[mae]<score[usiro]){
                    System.out.println("Yes");
                    break;
                }
                mae++;
                usiro++;
            }
            if(j==n-k){
                System.out.println("No");
            }
        }
    }
}