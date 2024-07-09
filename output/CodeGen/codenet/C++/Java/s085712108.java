/*Lucky_Glass*/
import java.util.*;
import java.lang.*;
import java.io.*;

public class s085712108 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a = in.nextInt();
		int b = in.nextInt();
		int c = in.nextInt();
		int tot = 0;
		Queue<QUEUE> que = new LinkedList<QUEUE>();
		que.add(new QUEUE(a, b, c, tot));
		while (!que.isEmpty()) {
			QUEUE fro = que.poll();
			if (fro.a == fro.b && fro.b == fro.c) {
				System.out.println(fro.tot);
				return;
			}
			for (int i = 0; i < 6; i++) {
				QUEUE push = fro;
				push.tot++;
				push.a += F[i][0];
				push.b += F[i][1];
				push.c += F[i][2];
				int n = push.a * 10000 + push.b * 100 + push.c;
				if (!HASH(n)) continue;
				que.add(push);
			}
		}
	}

	public static int[][] F = { { 1, 1, 0 }, { 1, 0, 1 }, { 0, 1, 1 }, { 2, 0, 0 }, { 0, 2, 0 }, { 0, 0, 2 } };

	public static boolean HASH(int n) {
		for (int i = 0; i < Hash.length; i++) {
			if (Hash[i].contains(n)) return false;
		}
		Hash[n % Hash.length].add(n);
		return true;
	}

	public static class QUEUE {
		public int a, b, c, tot;

		public QUEUE(int a, int b, int c, int tot) {
			this.a = a;
			this.b = b;
			this.c = c;
			this.tot = tot;
		}
	}
}