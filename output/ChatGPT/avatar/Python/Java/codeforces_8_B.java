import java.util.HashMap;
import java.util.Scanner;

public class codeforces_8_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String record_of_movements = scanner.nextLine();
        int x = 0, y = 0;
        HashMap<Pair<Integer, Integer>, String> d = new HashMap<>();
        d.put(new Pair<>(x, y), "");
        boolean bug = false;
        for (char move : record_of_movements.toCharArray()) {
            Pair<Integer, Integer> temp = new Pair<>(x, y);
            int dx = 0, dy = 0;
            if (move == 'L') {
                dy = -1;
            } else if (move == 'R') {
                dy = 1;
            } else if (move == 'U') {
                dx = 1;
            } else if (move == 'D') {
                dx = -1;
            }
            x += dx;
            y += dy;
            Pair<Integer, Integer> currentPosition = new Pair<>(x, y);
            if (!d.containsKey(currentPosition)) {
                boolean found = false;
                for (char step : d_movement.keySet()) {
                    Pair<Integer, Integer> nextPosition = new Pair<>(x + d_movement.get(step).getKey(), y + d_movement.get(step).getValue());
                    if (!nextPosition.equals(temp) && d.containsKey(nextPosition)) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    bug = true;
                    break;
                }
            } else {
                bug = true;
                break;
            }
            d.put(currentPosition, "");
        }
        if (bug) {
            System.out.println("BUG");
        } else {
            System.out.println("OK");
        }
    }

    static class Pair<K, V> {
        private final K key;
        private final V value;

        Pair(K key, V value) {
            this.key = key;
            this.value = value;
        }

        K getKey() {
            return key;
        }

        V getValue() {
            return value;
        }

        @Override
        public boolean equals(Object o) {
            if (this == o) return true;
            if (o == null || getClass() != o.getClass()) return false;
            Pair<?, ?> pair = (Pair<?, ?>) o;
            if (!key.equals(pair.key)) return false;
            return value.equals(pair.value);
        }

        @Override
        public int hashCode() {
            int result = key.hashCode();
            result = 31 * result + value.hashCode();
            return result;
        }
    }

    static HashMap<Character, Pair<Integer, Integer>> d_movement = new HashMap<Character, Pair<Integer, Integer>>() {{
        put('L', new Pair<>(0, -1));
        put('R', new Pair<>(0, 1));
        put('U', new Pair<>(1, 0));
        put('D', new Pair<>(-1, 0));
    }};
}