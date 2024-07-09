import java.io.IOException ; import java.time.LocalTime ; import java.util.* ; def main ( ):
	sc = java.io.InputStreamReader ( System.in )
	s = sc.readline ( ).split ( ":" )
	t = sc.readline ( ).split ( ":" )
	x = java.time.LocalTime ( int ( s [ 0 ] ), int ( s [ 1 ] ) )
	y = java.time.LocalTime ( int ( t [ 0 ] ), int ( t [ 1 ] ) )
	print ( x.minusHours ( y.hour ).minusMinutes ( y.minute ) )
main ( )



Expected Output:

1:00

Explanation:

The number of hours between 1:00 and 1:00 is 0.

Note:

The number of minutes in a hour is 60.

Tags: Math, String
Similar Problems: (M) Add Two Numbers, (M) Multiply Strings, (M) Add Two Numbers II
public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] s = sc.nextLine().split(":");
        String[] t = sc.nextLine().split(":");
        LocalTime x = LocalTime.of(Integer.parseInt(s[0]), Integer.parseInt(s[1]));
        LocalTime y = LocalTime.of(Integer.parseInt(t[0]), Integer.parseInt(t[1]));
        System.out.println(x.minusHours(y.getHour()).minusMinutes(y.getMinute()));
    }
}