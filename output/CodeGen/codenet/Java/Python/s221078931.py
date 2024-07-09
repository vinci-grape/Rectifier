import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		IntegralRect rects[] = new IntegralRect[40000];
		for(int i = 0; i < 200; i++){
			for(int j = 0; j < 200; j++){
				rects[i*200 + j] = new IntegralRect(i + 1, j + 1);
			}
		}
		Arrays.sort(rects);
		
		//debug
//		for(int i = 0; i < 100; i++){
//			System.out.println(rects[i].height + " "+ rects[i].width +" " + rects[i].diagonal());
//		}

		while(true){
			String[] tmpArray = br.readLine().split(" ");

			int h = Integer.parseInt(tmpArray[0]);
			int w = Integer.parseInt(tmpArray[1]);

			if(h == 0 && w == 0){
				break;
			}

			IntegralRect tmpRect = new IntegralRect(h, w);
			int diag = tmpRect.diagonal();
//			System.out.println(diag);
			for(int i = 0; i < rects.length ; i++){
//				System.out.println(rects[i].diagonal());
				if(rects[i].compareTo(tmpRect) > 0){
					System.out.println(rects[i].height+" "+rects[i].width);
					break;
				}
			}
		}
	}

}

class IntegralRect implements Comparable<IntegralRect> {
	int height;
	int width;
	public IntegralRect(int h, int w){
		this.height = h;
		this.width = w;
	}


	public int diagonal(){
		if(height >= width){
			return Integer.MAX_VALUE;
		}
		return this.height*this.height + this.width*this.width;
	}


	@Override
	public int compareTo(IntegralRect o) {
		// TODO?????????????????????????????????????????????
		int d1 = this.diagonal();
		int d2 = o.diagonal();
//		System.out.println(d1+" "+d2);
		return d1 == d2? this.height - o.height : d1 - d2;
	}
}