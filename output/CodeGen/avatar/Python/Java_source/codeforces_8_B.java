public class codeforces_8_B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[][] moves = new int[n][2];
        for(int i = 0; i < n; i++){
            moves[i][0] = in.nextInt();
            moves[i][1] = in.nextInt();
        }
        int x = 0, y = 0;
        boolean bug = false;
        for(int move : moves){
            int tempX = x, tempY = y;
            x += move[0];
            y += move[1];
            if(x < 0 || y < 0 || x >= n || y >= n) bug = true;
            else if(!d.containsKey(x, y)){
                for(int step : d_movement){
                    if(x + step[0] == tempX && y + step[1] == tempY) bug = true;
                }
            }
            else bug = true;
            if(bug) break;
            d.put(x, y, "");
        }
        if(bug) System.out.println("BUG");
        else System.out.println("OK");
    }
    static Map<Integer, Integer> d = new HashMap<>();
    static Map<Integer, Integer> d_movement = new HashMap<>();
    static {
        d_movement.put(0, -1);
        d_movement.put(1, 0);
        d_movement.put(0, 1);
        d_movement.put(-1, 0);
    }
}