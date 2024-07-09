public class s240156356 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str1 = in.next();
        String str2 = in.next();
        in.close();

        String[] str1Arr = str1.split("");
        String[] str2Arr = str2.split("");

        Arrays.sort(str1Arr);
        Arrays.sort(str2Arr, Collections.reverseOrder());

        int loop = str1Arr.length > str2Arr.length? str2Arr.length : str1Arr.length;
        boolean flag = false;

        for(int i = 0; loop > i; i++){
            char ch1 = str1Arr[i];
            char ch2 = str2Arr[i];

            if(ch1 == ch2){
                if(loop == i + 1 && str1Arr.length < str2Arr.length){
                    flag = true;
                    break;
                }else{
                    continue;
                }
            }else{
                if(ch2 > ch1){
                    flag = true;
                    break;
                }else{
                    break;
                }
            }
        }

        if(flag){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}