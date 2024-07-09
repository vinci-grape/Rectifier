public class s495283729 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        int i, flag = 0;
        for (i = 0; i < s.length(); i++) {
            if (i % 2 == 0) {
                switch (s.charAt(i)) {
                    case 'R':
                        break;
                    case 'U':
                        break;
                    case 'D':
                        break;
                    default:
                        flag = 1;
                        break;
                }
            } else {
                switch (s.charAt(i)) {
                    case 'L':
                        break;
                    case 'U':
                        break;
                    case 'D':
                        break;
                    default:
                        flag = 1;
                        break;
                }
            }
        }
        if (flag == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}