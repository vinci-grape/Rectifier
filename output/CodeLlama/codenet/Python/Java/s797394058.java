import java.util.*;

import java.lang.*;

import java.io.*;

public class s797394058 {

    public static void main (String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();

        int x = 1;

        int N_list[] = new int[N];

        for(int i=0; i<N; i++)

        {

            N_list[i] = x+1;

            x++;

        }

        int n[][] = new int[N][3];

        int m = 0;

        for(int i=0; i<N; i++)

        {

            for(int j=0; j<3; j++)

            {

                n[i][j] = N_list[i];

            }

            m++;

        }

        System.out.println(m);

    }

}
