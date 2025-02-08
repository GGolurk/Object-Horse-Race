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
 + bool isWinner()

horse.cpp file:
include horse

horse horse(){
    horse position = 0
    horse trackLength = 15
    horse id = 0
} // end constructor

void  horse init(int id, int trackLength, int position){
    horse position = position
    horse trackLength = trackLength
    horse id = id
} // end init

void  horse advance(){
    get a random number
    amount = random number modulus 2
    position += amount
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

race.h file:

class race{
    private:
        const int TRACK_LENGTH = 15
        const int NUM_HORSES = 5
        int horses[]
    public:
        void runGame()
        race()
} // end class

race.cpp:

race race(){
    for i in num horses{
        horses[i] = 0
    }
} // end constructor

race rungame(){
    bool keepGoing = true
    while keepGoing = true{
        for i in NUM_HORSES{
            horse init(i, TRACK_LENGTH, horses[i])
            horse printLane()
            horse advance()
            keepGoing = horse isWinner()
        } // end for
    } // end while
} // end rungame

main file:

include horse
include race

void main(){
    race
    race rungame()
} // end main

make file:

horseRun: horse.o race.o horseRace.o
    g++ -g horse.o race.o horseRace.o -o horseRun

horseRace.o: horse.h race.h horseRace.cpp
    g++ -c -g horseRace.cpp

horse.o: horse.h horse.cpp
    g++ -c -g horse.cpp

race.o: horse.h race.h race.cpp
    g++ -c -g race.cpp

clean:
    rm *.o
    rm horseRun

run:
    ./horseRun