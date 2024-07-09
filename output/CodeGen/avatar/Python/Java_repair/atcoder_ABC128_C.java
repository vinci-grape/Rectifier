0; k < m; k++){
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
                        s[i] = v[i];
                        break;