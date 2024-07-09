public class codeforces_31_A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
        }
        for(int i=0; i < n; i++){
            for(int j=0; j < n; j++){
                if(i == j) continue;
                for(int k=0; k < n; k++){
                    if(arr[k]!= arr[j] && arr[k]!= arr[i] && arr[k] == arr[i] + arr[j]){
                        System.out.println(k + 1 + " " + j + 1 + " " + i + 1);
                        System.exit(0);
                    }
                }
            }
        }
        System.out.println(-1);
    }
}