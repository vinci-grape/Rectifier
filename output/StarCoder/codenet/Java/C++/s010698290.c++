#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> penal(n+1, 0);
    vector<bool> solved(n+1, false);

    for(int i=0; i<m; i++){
        int num;
        cin >> num;
        string str;
        cin >> str;
        if(str[0] == 'A'){
            solved[num] = true;
        }else
            if(solved[num] == false)
                penal[num]++;
    }

    int correct_ans = 0;
    int num_penal = 0;
    for(int i=1; i<=n; i++){
        if(solved[i] == true){
            correct_ans++;
            num_penal+=penal[i];
        }

    }

    cout << correct_ans << " " << num_penal << "\n";

    return 0;
}

// ========================================### FAST IO ###=========================================//
#include <bits/stdc++.h>
using namespace std;

class FastReader {
public:
    FastReader() {
        sbuf = new char[BUFSIZ];
        pbuf = sbuf;
        vbuf = false;
        fread(sbuf, 1, BUFSIZ, stdin);
    }

    char gc() {
        if (pbuf == sbuf + BUFSIZ) {
            if (vbuf) {
                vbuf = false;
                return (char) (pbuf - sbuf);
            }
            memmove(sbuf, pbuf, BUFSIZ - 1);
            pbuf = sbuf + BUFSIZ - 1;
            fread(sbuf + BUFSIZ - 1, 1, 1, stdin);
            return gc();
        }
        return *pbuf++;
    }

    void pb(char c) {
        if (pbuf == sbuf + BUFSIZ) {
            fwrite(sbuf, 1, BUFSIZ, stdout);
            pbuf = sbuf;
        }
        *pbuf++ = c;
    }

    void read(int &x) {
        x = 0;
        int c;
        while ((c = gc()) < '0' || c > '9')
            ;
        while (c >= '0' && c <= '9') {
            x = (x << 3) + (x << 1) + c - '0';
            c = gc();
        }
    }

    void read(long long &x) {
        x = 0;
        int c;
        while ((c = gc()) < '0' || c > '9')
            ;
        while (c >= '0' && c <= '9') {
            x = (x << 3) + (x << 1) + c - '0';
            c = gc();
        }
    }

    void read(double &x) {
        x = 0;
        int c;
        while ((c = gc()) < '0' || c > '9')
            ;
        while (c >= '0' && c <= '9') {
            x = (x << 3) + (x << 1) + c - '0';
            c = gc();
        }
        if (c == '.') {
            double y = 1;
            while ((c = gc()) >= '0' && c <= '9') {
                y /= 10;
                x += (y * (c - '0'));
                c = gc();
            }
        }
    }

    void read(char *str) {
        char c;
        while ((c = gc()) < 'a' || c > 'z')
            ;
        while (c >= 'a' && c <= 'z') {
            *str++ = c;
            c = gc();
        }
        *str = 0;
    }

    void read(string &str) {
        char c;
        while ((c = gc()) < 'a' || c > 'z')
            ;
        while (c >= 'a' && c <= 'z') {
            str.push_back(c);
            c = gc();
        }
    }

private:
    static const int BUFSIZ = 1 << 15;
    char sbuf[BUFSIZ];
    char *pbuf;
    bool vbuf;
};