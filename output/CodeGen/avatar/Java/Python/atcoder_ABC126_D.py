import java.util.* ; import java.util.Map.* ; class atcoder_ABC126_D { private static int [ ] colors ; def main ( self, args ):
    sc = java.util.Scanner ( sys.stdin )
    n = sc.nextInt ( )
    m = n - 1
    colors = [ - 1 ] * n
    points = [ Point ( i ) for i in range ( n ) ]
    for i in range ( n ):
        points [ i ] = Point ( i )
    while m > 0:
        me = sc.nextInt ( ) - 1
        you = sc.nextInt ( ) - 1
        length = sc.nextInt ( )
        points [ me ].becomeFriend ( points [ you ], length )
        points [ you ].becomeFriend ( points [ me ], length )
    dfs ( points [ 0 ], 0 )
    for c in colors:
        print c
    return

class Point:
    def __init__(self, name):
        self.name = name
        self.friends = {}
    def becomeFriend(self, p, length):
        self.friends[p] = length

def dfs(p, length):
    already_known = colors[p.name]!= -1
    if already_known:
        return
    if length % 2 == 0:
        colors[p.name] = 0
    else:
        colors[p.name] = 1
    for entry in p.friends.iteritems():
        friend = entry[0]
        length2 = entry[1]
        dfs(friend, length + length2)

if __name__ == '__main__':
    main()