public class s539273394 {
    public static void main(String[] args) {
        int N;
        int prime_counter = 0;
        int prime_list[1001];
        int prime_num[1001];
        int prime_or_not[1001];
        int kekka[2];
        sosuubunnpu();
        cin >> N;
        int innsuu[11];
        int A[N+1][11];
        for (int i = 0; i <= 1000; ++i)
        {
            prime_num[i] = 0;
        }
        for (int i = 2; i <= 1000; ++i)
        {
            prime_or_not[i] = 0;
        }
        for (int i = 2; i <= 1000; ++i)
        {
            for (int j = 2; j <= 1000/i; ++j)
            {
                if(prime_or_not[i]==0){
                    prime_or_not[i*j] = 1;
                }
            }
        }
        for (int i = 2; i <= 1000; ++i)
        {
            if(prime_or_not[i]==0){
                prime_list[prime_counter] = i;
                prime_counter+=1;
            }
        }
        for (int i = 2; i <= N; ++i)
        {
            kekka[1] = i;
            for (int j = 0; j < prime_counter; ++j)
            {
                innsuubunnkai(kekka[1],prime_list[j]);
                prime_num[j]+=kekka[0];
            }
        }
        for (int i = 0; i < prime_counter; ++i){
            result = (result*(prime_num[i]+1))%1000000007;
        }
        cout << result << endl;
    }
}