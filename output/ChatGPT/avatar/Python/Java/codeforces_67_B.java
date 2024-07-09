int n = input.nextInt();
int k = input.nextInt();
int[] M = new int[n];
for(int i=0; i<n; i++){
    M[i] = input.nextInt();
}
int m = 0;
for(int j=0; j<n; j++){
    int p = 0;
    for(p=0; p<n; p++){
        if(M[p] == 0){
            System.out.print(p+1 + " ");
            break;
        }
    }
    for(int l=0; l<p+1-k; l++){
        M[l] -= 1;
    }
    M[p] -= 1;
}