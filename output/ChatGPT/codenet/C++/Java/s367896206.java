import java.util.Scanner;

class Cube {
    int[] f;
    
    Cube() {
        f = new int[6];
    }
    
    void rollZ() {
        roll(1, 2, 4, 3);
    }
    
    void rollY() {
        roll(0, 2, 5, 3);
    }
    
    void rollX() {
        roll(0, 1, 5, 4);
    }
    
    void roll(int i, int j, int k, int l) {
        int t = f[i];
        f[i] = f[j];
        f[j] = f[k];
        f[k] = f[l];
        f[l] = t;
    }
}

public class s367896206 {
    static boolean eq(Cube c1, Cube c2) {
        for (int i = 0; i < 6; i++) {
            if (c1.f[i] != c2.f[i]) {
                return false;
            }
        }
        return true;
    }
    
    static boolean equal(Cube c1, Cube c2) {
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                if (eq(c1, c2)) {
                    return true;
                }
                c1.rollZ();
            }
            if (i % 2 == 0) {
                c1.rollY();
            } else {
                c1.rollX();
            }
        }
        return false;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Cube c1 = new Cube();
        Cube c2 = new Cube();
        
        for (int i = 0; i < 6; i++) {
            c1.f[i] = scanner.nextInt();
        }
        for (int i = 0; i < 6; i++) {
            c2.f[i] = scanner.nextInt();
        }

        if (equal(c1, c2)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}