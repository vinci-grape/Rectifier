import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Main {
	
	String[][] colorMtr;
	int h;
	int w;
	int k;

	public static void main(String[] args) throws IOException {
		Main mainObj = new Main();
		mainObj.solve();
	}

	public void solve() throws IOException {
		FastScanner fs = new FastScanner();
		
		h = fs.nextInt();
		w = fs.nextInt();
		k = fs.nextInt();
		
		colorMtr = new String[h][];
		for(int i = 0 ;i < h; i++) {
			colorMtr[i] = fs.next().split("");
		}
		
		int hPattern = pow(2, h);
		int wPattern = pow(2, w);
		
		int ans = 0;
		
		for(int i = 0; i < hPattern; i++) {
			for(int j = 0; j < wPattern; j++) {
				if(judge(i,j)) {
					ans++;
				}
			}
		}
		
		System.out.println(ans);
	}
	
	
	boolean judge(int hPattern, int wPattern) {
		
		int[] hBitArr = new int[h];
		int[] wBitArr = new int[w];
		
		for(int i = 0; i < h; i++) {
			if(((hPattern >> i) & 1) == 1) {
				hBitArr[i] = 1;
			}
		}
		
		for(int i = 0;i < w; i++) {
			if(((wPattern >> i) & 1) == 1) {
				wBitArr[i] = 1;
			}
		}
		
		int black = 0;
		
		for(int i = 0; i < h; i++) {
			for(int j = 0; j < w; j++) {
				if(hBitArr[i] == 1 || wBitArr[j] == 1) {
					continue;
				}
				
				if(colorMtr[i][j].equals("#")) {
					black++;
				}
			}
		}
		
		if(black == k) {
			return true;
		}else {
			return false;
		}
	}

	public int pow(int base, int n) {
		int retVal = 1;
		while (n > 0) {
			if ((n & 1) == 1) {
				retVal *= base;
			}
			n >>= 1;
			base *= base;
		}
		return retVal;
	}
	

	public class FastScanner {

		BufferedReader reader;
		private StringTokenizer st;

		public FastScanner() {
			st = null;
			reader = new BufferedReader(new InputStreamReader(System.in));
		}

		public String next() throws IOException {
			if (st == null ||!st.hasMoreElements()) {
				st = new StringTokenizer(reader.readLine());
			}
			return st.nextToken();
		}

		public String nextLine() throws IOException {
			st = null;
			String readLine = null;
			readLine = reader.readLine();
			return readLine;
		}

		public int nextInt() throws NumberFormatException, IOException {
			return Integer.parseInt(next());
		}

		public long nextLong() throws NumberFormatException, IOException {
			return Long.parseLong(next());
		}

		public int[] nextIntArr(int n) throws NumberFormatException, IOException {
			int[] retArr = new int[n];
			for (int