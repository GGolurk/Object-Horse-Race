# Object-Horse-Race
Same as the procedural horse race, but done with objects.

algorithm:

horse.h file:
data
 - int position
 - int trackLength
 - int id
methods
 + Horse()
 + void init(int id, int trackLength)
 + void advance()
 + void printLane()
 + bool isWinner

horse.cpp file:
include horse

horse horse(){
    
} // end constructor

void  horse init(int id, int trackLength){
    
} // end init

void  horse advance(){
    get a random number
    amount = random number modulus 2
    change position by amount
} // end advance

void  horse printLane(){
    for i in trackLength{
        if i != position{
            print(.)
        } else {
            print(position)
        } // end if
    } // end for
} // end printLane

bool  horse isWinner(){
    if position > trackLength{
        return true
    } // end for
} // end isWinner

race file:


main file:


make file:
