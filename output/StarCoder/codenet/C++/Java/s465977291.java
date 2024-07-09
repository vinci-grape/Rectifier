import java.util.*;
import java.lang.*;
import java.io.*;

public class s465977291 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int d = scan.nextInt();
        double a = d*2+1;
        System.out.println(Math.ceil(n/a));
    }
}