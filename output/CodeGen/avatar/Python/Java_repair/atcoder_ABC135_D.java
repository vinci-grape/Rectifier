import java.util.*;
import java.util.*;
import java.util.*;
import java.util.*;
import java.util.*;
import java.util.*;

public class atcoder_ABC135_D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().split(" ");
        List<String> list = new ArrayList<>();
        for (String s : input) {
            list.add(s);
        }
        Collections.sort(list);
        
        for (String s : list) {
            System.out.println(s);
        }
    }
}