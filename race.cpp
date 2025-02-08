#include "horse.h"
#include "race.h"

Race::Race(){
	for(int i = 0; i < NUM_HORSES; i++){
		Race::horses[i] = 0;
	} // End for
} // End constructor

void Race::runGame(){
	bool keepGoing = true;
	while(keepGoing = true){
		for(int i = 0; i < NUM_HORSES; i++){
			Horse::init(i, TRACK_LENGTH, horses[i]);
			Horse::printLane();
			Horse::advance();
			keepGoing = Horse::isWinner();
		} // End for
	} // End while
} // End runGame
