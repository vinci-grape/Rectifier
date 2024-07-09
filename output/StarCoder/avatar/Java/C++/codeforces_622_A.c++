#include <bits/stdc++.h>
using namespace std;

#define BUFFERSIZE 512000

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long position, nrstSeqStartIndx = 1;
    cin >> position;
    while (getValueAtIndex(nrstSeqStartIndx * 2) < position)
    {
        nrstSeqStartIndx *= 2;
    }
    while (getValueAtIndex(nrstSeqStartIndx + 1) <= position)
    {
        nrstSeqStartIndx++;
    }
    long long startIndex = getValueAtIndex(nrstSeqStartIndx);
    cout << (position - startIndex) + 1 << "\n";
    return 0;
}

long long getValueAtIndex(long long index)
{
    return 1 + ((index - 1) * index / 2);
}

class in
{
public:
    static std::istream *in;
    static std::istream *&input()
    {
        return in;
    }
    static std::istream &init(std::istream &stream)
    {
        in = &stream;
        return *in;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &(*f)(std::istream &))
    {
        return f(stream);
    }
    static std::istream &operator>>(std::istream &stream, std::ios_base &(*f)(std::ios_base &))
    {
        return f(stream);
    }
    static std::istream &operator>>(std::istream &stream, std::ios_base &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream *&stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream *stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std::istream &stream2)
    {
        return stream;
    }
    static std::istream &operator>>(std::istream &stream, std