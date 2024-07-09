import java.util.Scanner;
import java.lang.Math;
public class s143031369 {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int n = cin.nextInt();
		Point[] p = new Point[n];
		for (int i = 0; i < n; i++) {
			p[i] = new Point(cin.nextInt(), cin.nextInt());
		}
		if (n == 2) {
			System.out.println("0.5");
			System.out.println("0.5");
		} else {
			int m = jarvis(p, n);
			double sum = 0;
			if (m == 2) {
				p[ch[0]].ans = 0.5;
				p[ch[1]].ans = 0.5;
			} else {
				for (int i = 0; i < m; i++) {
					p[ch[i]].ang = Math.PI - Math.acos(cos(p[ch[i]], p[ch[(i - 1 + m) % m]], p[ch[(i + 1) % m]]));
				}
				for (int i = 0; i < n; i++) {
					p[i].ans = p[i].ang / 2 / Math.PI;
				}
			}
			for (int i = 0; i < n; i++) {
				System.out.println(p[i].ans);
			}
		}
	}

	static int[] ch = new int[110];
	static double[] ang = new double[110];
	static double[] ans = new double[110];
	static double dot(Point o, Point a, Point b) {
		return (a.x - o.x) * (b.x - o.x) + (a.y - o.y) * (b.y - o.y);
	}

	static double dot(Point a, Point b) {
		return a.x * b.x + a.y * b.y;
	}

	static double cross(Point o, Point a, Point b) {
		return (a.x - o.x) * (b.y - o.y) - (b.x - o.x) * (a.y - o.y);
	}

	static int btw(Point x, Point a, Point b) {
		return sig(dot(x, a, b));
	}

	static double dis(Point a, Point b) {
		return Math.sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	}

	static double cos(Point o, Point a, Point b) {
		return dot(o, a, b) / dis(o, a) / dis(o, b);
	}

	static int jarvis(Point[] p, int n) {
		int d, i, o, s, l, t;
		for (d = i = 0; i < n; i++)
			if (p[i].compareTo(p[d]) < 0)
				d = i;
		l = s = ch[0] = d;
		d = 1;
		do {
			o = l;
			for (i = 0; i < n; i++)
				if ((t = sig(cross(p[o], p[l], p[i]))) > 0 || (t == 0 && btw(p[l], p[o], p[i]) <= 0))
					l = i;
			ch[d++] = l;
		} while (l != s);
		return d - 1;
	}

	static class Point implements Comparable<Point> {
		double x, y;
		double k;

		public Point() {
		}

		public Point(double x, double y) {
			this.x = x;
			this.y = y;
		}

		public void set(double x, double y) {
			this.x = x;
			this.y = y;
		}

		public double mod() {
			return Math.sqrt(x * x + y * y);
		}

		public double mod_pow() {
			return x * x + y * y;
		}

		public void output() {
			System.out.println("x = " + x + ", y = " + y);
		}

		public int compareTo(Point p) {
			return sig(x - p.x) != 0 ? x < p.x ? -1 : 1 : sig(y - p.y) < 0 ? -1 : 1;
		}
	}

	static int sig(double d) {
		return Math.abs(d) < 1e-8 ? 0 : d < 0 ? -1 : 1;
	}
}