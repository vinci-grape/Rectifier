import java.util.Scanner;

public class codeforces_8_B {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String record_of_movements = sc.next();
        int x = 0, y = 0;
        char[][] d_movement = new char[][]{{'L', 0, -1}, {'R', 0, 1}, {'U', 1, 0}, {'D', -1, 0}};
        boolean bug = false;
        for (int i = 0; i < record_of_movements.length(); i++) {
            char move = record_of_movements.charAt(i);
            int temp_x = x, temp_y = y;
            x += d_movement[move - 'A'][1];
            y += d_movement[move - 'A'][2];
            if (!d.containsKey(new Integer[]{x, y})) {
                for (int j = 0; j < d_movement.length; j++) {
                    if ((x + d_movement[j][1], y + d_movement[j][2])!= (temp_x, temp_y) && d.containsKey(new Integer[]{x + d_movement[j][1], y + d_movement[j][2]})) {
                        bug = true;
                        break;
                    }
                }
            } else {
                bug = true;
            }
            if (bug) {
                break;
            }
            d.put(new Integer[]{x, y}, "");
        }
        if (bug) {
            System.out.println("BUG");
        } else {
            System.out.println("OK");
        }
    }
}