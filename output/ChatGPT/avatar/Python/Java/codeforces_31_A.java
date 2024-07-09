int y = Integer.parseInt(Scanner.nextLine());
String[] inputArr = Scanner.nextLine().split(" ");
int[] arr = new int[inputArr.length];
for(int i=0; i<inputArr.length; i++) {
    arr[i] = Integer.parseInt(inputArr[i]);
}
for(int i=0; i<arr.length; i++) {
    for(int j=0; j<arr.length; j++) {
        if(i == j) {
            continue;
        }
        for(int k=0; k<arr.length; k++) {
            if(arr[k] != arr[j] && arr[k] != arr[i] && arr[k] == arr[i] + arr[j]) {
                System.out.println((k+1) + " " + (j+1) + " " + (i+1));
                System.exit(0);
            }
        }
    }
}
System.out.println(-1);