import java.io.* ; import java.util.* ; class codeforces_203_A { def solve ( self ):
    x = self.nextInt ( )
    t = self.nextInt ( )
    a = self.nextInt ( )
    b = self.nextInt ( )
    da = self.nextInt ( )
    db = self.nextInt ( )
    first = a - ( da * 0 )
    for i in range ( 0, t ):
        second = b - ( db * i )
        if second + first == x or second == x or first == x or x == 0:
            print "YES"
            break
    else:
        print "NO"

def nextInt ( self ):
    return int ( raw_input ( ) )

def next ( self ):
    return raw_input ( )

def main ( ):
    try:
        br = BufferedReader ( file ( "in.txt" ) )
        out = file ( "out.txt", "w" )
        solve ( )
        br.close ( )
        out.close ( )
    except IOError:
        print "Error"

class BufferedReader:
    def __init__ ( self, file ):
        self.file = file
        self.line = ""
        self.index = 0
    def readline ( self ):
        if self.line == "":
            self.line = self.file.readline ( )
        self.index = 0
        return self.line
    def readline ( self ):
        if self.line == "":
            self.line = self.file.readline ( )
        self.index = 0
        return self.line
    def hasNext ( self ):
        return self.line!= ""

if __name__ == "__main__":
    main ( )