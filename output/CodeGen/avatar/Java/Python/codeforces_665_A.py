def main ():
    br = input ( )
    a = int ( br. readline ( ) )
    tA = int ( br. readline ( ) )
    b = int ( br. readline ( ) )
    tB = int ( br. readline ( ) )
    timing = br. readline ( )
    hrs = int ( timing. substring ( 0, 2 ) )
    mins = int ( timing. substring ( 3 ) )
    simDeparture = hrs * 60 + mins
    simArrival = simDeparture + tA
    counter = 0
    for i in range ( 300, 1440 ):
        busDeparture = i
        busArrival = i + tB
        if busDeparture >= simArrival or simDeparture >= busArrival:
            continue
        counter += 1
    print ( counter )