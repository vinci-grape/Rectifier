import java.util.Scanner;

public class s759547301 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String S = sc.nextLine();

        if (S.equals("Sunny")) {

            System.out.println("Cloudy");

        }

        if (S.equals("Cloudy")) {

            System.out.println("Rainy");

        }

        if (S.equals("Rainy")) {

            System.out.println("Sunny");

        }

    }

}