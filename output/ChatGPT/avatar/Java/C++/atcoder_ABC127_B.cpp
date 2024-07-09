#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <stdexcept>

class SimpleScanner {
private:
    static const int BUFFER_SIZE = 10240;
    std::istream& in;
    char buffer[BUFFER_SIZE];
    int bufferPos;
    int bufferSize;
    bool eof;

    char read() {
        if (bufferPos >= bufferSize) {
            bufferPos = 0;
            in.read(buffer, BUFFER_SIZE);
            bufferSize = in.gcount();
            if (bufferSize <= 0) {
                eof = true;
                return '\0';
            }
        }
        return buffer[bufferPos++];
    }

    void checkEof() {
        if (eof) {
            throw std::out_of_range("End of input");
        }
    }

public:
    SimpleScanner(std::istream& in) : in(in), bufferPos(0), bufferSize(0), eof(false) {}

    char nextChar() {
        checkEof();
        char c = read();
        checkEof();
        return c;
    }

    std::string next() {
        char c;
        do {
            c = read();
            checkEof();
        } while (std::isspace(c));
        std::stringstream ss;
        do {
            ss << c;
            c = read();
        } while (!eof && !std::isspace(c));
        return ss.str();
    }

    int nextInt() {
        std::string s = next();
        return std::stoi(s);
    }

    long long nextLong() {
        std::string s = next();
        return std::stoll(s);
    }

    double nextDouble() {
        std::string s = next();
        return std::stod(s);
    }
};

int main() {
    SimpleScanner scanner(std::cin);
    int r = scanner.nextInt();
    int d = scanner.nextInt();
    long long x = scanner.nextLong();
    for (int i = 0; i < 10; ++i) {
        x = r * x - d;
        std::cout << x << std::endl;
    }
    return 0;
}