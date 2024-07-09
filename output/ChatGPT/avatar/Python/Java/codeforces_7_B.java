public class codeforces_7_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        int m = scanner.nextInt();
        int[] alocuente = new int[m];
        int ind = 1;
        
        for (int i = 0; i < t; i++) {
            String[] op = scanner.nextLine().split(" ");
            
            if (op[0].equals("alloc")) {
                int pos = 0;
                
                for (int j = 0; j < m; j++) {
                    if (alocuente[j] == 0) {
                        pos++;
                        
                        if (pos == Integer.parseInt(op[1])) {
                            for (int k = j - Integer.parseInt(op[1]) + 1; k <= j; k++) {
                                alocuente[k] = ind;
                            }
                            
                            System.out.println(ind);
                            ind++;
                            break;
                        }
                    } else {
                        pos = 0;
                    }
                }
                
                if (pos != Integer.parseInt(op[1])) {
                    System.out.println("NULL");
                }
            }
            
            if (op[0].equals("erase")) {
                int pos = 0;
                
                if (!contains(alocuente, Integer.parseInt(op[1])) || Integer.parseInt(op[1]) == 0) {
                    System.out.println("ILLEGAL_ERASE_ARGUMENT");
                } else {
                    for (int j = 0; j < m; j++) {
                        if (Integer.parseInt(op[1]) > 0 && alocuente[j] == Integer.parseInt(op[1])) {
                            alocuente[j] = 0;
                        }
                    }
                }
            }
            
            if (op[0].equals("defragment")) {
                int cnt = 0;
                
                for (int j = 0; j < m; j++) {
                    if (alocuente[j] == 0) {
                        cnt++;
                    }
                }
                
                int[] temp = new int[m - cnt];
                int index = 0;
                
                for (int j = 0; j < m; j++) {
                    if (alocuente[j] != 0) {
                        temp[index] = alocuente[j];
                        index++;
                    }
                }
                
                alocuente = new int[m];
                
                for (int j = 0; j < temp.length; j++) {
                    alocuente[j] = temp[j];
                }
                
                for (int j = temp.length; j < m; j++) {
                    alocuente[j] = 0;
                }
            }
        }
    }
    
    public static boolean contains(int[] arr, int value) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == value) {
                return true;
            }
        }
        return false;
    }
}