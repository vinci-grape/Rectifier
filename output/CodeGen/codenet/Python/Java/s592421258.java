public class s592421258 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i = 0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        int m = in.nextInt();
        int[] arr1 = new int[m];
        for(int arr1_i = 0; arr1_i < m; arr1_i++){
            arr1[arr1_i] = in.nextInt();
        }
        int result = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(arr[i] == arr1[j]){
                    result++;
                }
            }
        }
        System.out.println(result);
    }
}