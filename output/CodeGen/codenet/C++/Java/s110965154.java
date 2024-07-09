public class s110965154 {
 
    public static void main(String[] args) {
 
        int iNum = 0;
        Scanner sc = new Scanner(System.in);
        while (iNum!= 0) {
            int iIntValue = sc.nextInt();
            int[] vecIntValue = new int[iNum];
            for (int i = 0; i < iNum; i++) {
                vecIntValue[i] = sc.nextInt();
            }
 
            sort(vecIntValue);
 
            for (int i = 0; i < iNum; i++) {
                System.out.print(vecIntValue[i]);
                if (i!= iNum - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
            iNum = sc.nextInt();
        }
    }
 
    public static void sort(int[] a_rvecIntValue) {
 
        for (int i = 0; i < a_rvecIntValue.length; i++) {
 
            if (i!= 0) {
 
                int iIntValue = a_rvecIntValue[i];
                int j = i - 1;
                while ((j >= 0) && (a_rvecIntValue[j] > iIntValue)) {
                    a_rvecIntValue[j+1] = a_rvecIntValue[j];
                    j--;
                }
                a_rvecIntValue[j+1] = iIntValue;
            }
 
            for (int k = 0; k < a_rvecIntValue.length; k++) {
                System.out.print(a_rvecIntValue[k]);
                if (k!= a_rvecIntValue.length - 1) {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}