#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Main {
public:
    Main() {
    }

    void print(const char *s) {
        cout << s << endl;
    }

    void print(const string &s) {
        cout << s << endl;
    }

    void print(const vector<string> &vs) {
        for (auto it = vs.begin(); it!= vs.end(); ++it) {
            cout << *it << endl;
        }
    }

    void print(const char *s, int n) {
        while (n-- > 0) {
            cout << s;
        }
        cout << endl;
    }

    void print(const string &s, int n) {
        while (n-- > 0) {
            cout << s;
        }
        cout << endl;
    }

    void print(const vector<string> &vs, int n) {
        while (n-- > 0) {
            for (auto it = vs.begin(); it!= vs.end(); ++it) {
                cout << *it;
            }
            cout << endl;
        }
    }

    void print(const char *s, int n, int m) {
        while (n-- > 0) {
            cout << s;
        }
        while (m-- > 0) {
            cout << endl;
        }
    }

    void print(const string &s, int n, int m) {
        while (n-- > 0) {
            cout << s;
        }
        while (m-- > 0) {
            cout << endl;
        }
    }

    void print(const vector<string> &vs, int n, int m) {
        while (n-- > 0) {
            for (auto it = vs.begin(); it!= vs.end(); ++it) {
                cout << *it;
            }
            cout << endl;
        }
        while (m-- > 0) {
            cout << endl;
        }
    }

    void print(const char *s, int n, int m, int o) {
        while (n-- > 0) {
            cout << s;
        }
        while (m-- > 0) {
            cout << endl;
        }
        while (o-- > 0) {
            cout << endl;
        }
    }

    void print(const string &s, int n, int m, int o) {
        while (n-- > 0) {
            cout << s;
        }
        while (m-- > 0) {
            cout << endl;
        }
        while (o-- > 0) {
            cout << endl;
        }
    }

    void print(const vector<string> &vs, int n, int m, int o) {
        while (n-- > 0) {
            for (auto it = vs.begin(); it!= vs.end(); ++it) {
                cout << *it;
            }
            cout << endl;
        }
        while (m-- > 0) {
            cout << endl;
        }
        while (o-- > 0) {
            cout << endl;
        }
    }

    void print(const char *s, int n, int m, int o, int p) {
        while (n-- > 0) {
            cout << s;
        }
        while (m-- > 0) {
            cout << endl;
        }
        while (o-- > 0) {
            cout << endl;
        }
        while (p-- > 0) {
            cout << endl;
        }
    }

    void print(const string &s, int n, int m, int o, int p) {
        while (n-- > 0) {
            cout << s;
        }
        while (m-- > 0) {
            cout << endl;
        }
        while (o-- > 0) {
            cout << endl;
        }
        while (p-- > 0) {
            cout << endl;
        }
    }

    void print(const vector<string> &vs, int n, int m, int o, int p) {
        while (n-- > 0) {
            for (auto it = vs.begin(); it!= vs.end(); ++it) {
                cout << *it;
            }
            cout << endl;
        }
        while (m-- > 0) {
            cout << endl;
        }
        while (o-- > 0) {
            cout << endl;
        }
        while (p-- > 0) {
            cout << endl;
        }
    }
};

int main() {
    Main m;
    m.print("Hello, World!");
    m.print("Hello, World!", 10);
    m.print("Hello, World!", 10, 10);
    m.print("Hello, World!", 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!", 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10);
    m.print("Hello, World!",