public class atcoder_ABC128_C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[m];
        for(int a_i=0; a_i < m; a_i++){
            String[] a_temp = in.next().split(" ");
            a[a_i] = Integer.parseInt(a_temp[1]);
        }
        int[] p = new int[2];
        p[0] = in.nextInt();
        p[1] = in.nextInt();
        int[] q = new int[n-1];
        for(int i=0; i < n-1; i++){
            String[] q_temp = in.next().split(" ");
            q[i] = Integer.parseInt(q_temp[1]);
        }
        int[] v = new int[n-1];
        for(int i=0; i < n-1; i++){
            v[i] = in.nextInt();
        }
        int ans = 0;
        for(int i=0; i < n-1; i++){
            int[] s = new int[i+1];
            for(int j=0; j < i+1; j++){
                s[j] = q[j];
            }
            for(int j=0; j < m; j++){
                if(s[0] == a[j]){
                    s[0] = 0;
                    s[i] = v[i];
                    break;
                }
            }
            for(int j=0; j < m; j++){
                if(s[i] == a[j]){
                    s[i] = 0;
                    s[0] = v[0];
                    break;
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[i];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[0];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[i];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[0];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[i];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[0];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[i];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[0];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[i];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[0];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[i];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[0];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=0; k < m; k++){
                    if(s[j] == a[k]){
                        s[j] = 0;
                        s[i] = v[i];
                        break;
                    }
                }
            }
            for(int j=0; j < i+1; j++){
                if(s[j] == 0){
                    break;
                }
                for(int k=