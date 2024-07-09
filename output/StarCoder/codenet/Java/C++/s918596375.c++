#include <bits/stdc++.h>
using namespace std;

int main() {
	FastScanner sc = new FastScanner(cin);
	FastPrinter out = new FastPrinter(cout);

	solve(sc,out);

	return 0;
}

class FastScanner {
	public:
	std::istream* stream;
	std::istream& in;
	std::string delimiter;
	std::vector<std::string> tokens;

	FastScanner(std::istream& stream) : in(stream), delimiter(" \t\n\r\f\v") {
		delimiter += "()+-/*=<>%.,;:'\"[]{}|^~?";
	}

	void set_delimiter(std::string new_delimiter) {
		delimiter = new_delimiter;
	}

	std::vector<std::string> split() {
		std::string token;
		std::stringstream ss;
		while (std::getline(in, token, *delimiter.begin())) {
			ss.str(token);
			while (std::getline(ss, token, *delimiter.begin())) {
				tokens.push_back(token);
			}
		}
		return tokens;
	}

	std::string next() {
		if (tokens.empty()) {
			split();
		}
		std::string token = tokens.front();
		tokens.erase(tokens.begin());
		return token;
	}

	std::string nextLine() {
		std::string token;
		std::getline(in, token);
		return token;
	}

	int nextInt() {
		return std::stoi(next());
	}

	long long nextLong() {
		return std::stoll(next());
	}

	double nextDouble() {
		return std::stod(next());
	}

	int[] nextIntArray(int n) {
		int[] a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = nextInt();
		}
		return a;
	}

	long[] nextLongArray(int n) {
		long[] a = new long[n];
		for (int i = 0; i < n; i++) {
			a[i] = nextLong();
		}
		return a;
	}
};

class FastPrinter {
	public:
	std::ostream* stream;
	std::ostream& out;

	FastPrinter(std::ostream& stream) : out(stream) {}

	void println(std::string s) {
		out << s << std::endl;
	}

	void print(std::string s) {
		out << s;
	}

	void printInt(int x) {
		out << x;
	}

	void printLong(long x) {
		out << x;
	}

	void printDouble(double x) {
		out << x;
	}

	void printIntArray(int[] a, int n) {
		for (int i = 0; i < n; i++) {
			out << a[i] << " ";
		}
	}

	void printLongArray(long[] a, int n) {
		for (int i = 0; i < n; i++) {
			out << a[i] << " ";
		}
	}
};

void solve(FastScanner& sc, FastPrinter& out) {
	string s = sc.next();
	
	string[] a = {"a","e","i","o","u"};
	
	for(string str : a) {
		if(str.compare(s) == 0) {
			out.println("vowel");return;
		}
	}
	
	out.println("consonant");
	
}

class Pair {
	public:
	template<typename K, typename V>
	Pair(K key, V value) {
		this->key = key;
		this->value = value;
	}

	template<typename K, typename V>
	Pair(pair<K, V> p) {
		this->key = p.first;
		this->value = p.second;
	}

	template<typename V, typename K>
	Pair(Pair<V, K> p) {
		this->key = p.value;
		this->value = p.key;
	}

	template<typename K, typename V>
	Pair<V, K> swap() {
		return Pair<V, K>(value, key);
	}

	K key;
	V value;
};

int gcd(int a, int b) {
	if(a < b) return gcd(b, a);
	if(b == 0) return a;
	return gcd(b, a % b);
}

long long gcd(long long a, long long b) {
	if(a < b) return gcd(b, a);
	if(b == 0) return a;
	return gcd(b, a % b);
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}