import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class s964794058 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int memTime = input.nextInt();
        int[] memLate = new int[memTime];
        
        for (int i = 0; i < memTime; i++) {
            memLate[i] = input.nextInt();
        }
        
        List<Integer> colorList = new ArrayList<>();
        int memColor = 0;
        int highLate = 0;
        
        for (int color = 0; color < memTime; color++) {
            int member = memLate[color];
            
            if (member / 400 >= 8) {
                highLate++;
            } else if (!colorList.contains(member / 400)) {
                colorList.add(member / 400);
            }
        }
        
        int maxColor = colorList.size() + highLate;
        int minColor = colorList.size();
        
        if (minColor == 0) {
            minColor = 1;
        }
        
        System.out.println(minColor + " " + maxColor);
    }
}