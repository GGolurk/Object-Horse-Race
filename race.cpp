#include "horse.h"
#include "race.h"
#include <iostream>

Race::Race(){
	Horse horse0;
	Horse horse1;
	Horse horse2;
	Horse horse3;
	Horse horse4;
	Race::horses[0] = horse0;
	Race::horses[1] = horse1;
	Race::horses[2] = horse2;
	Race::horses[3] = horse3;
	Race::horses[4] = horse4;
} // End constructor

void Race::runGame(){
	bool keepGoing = true;
	while(keepGoing == true){
		for(int i = 0; i < NUM_HORSES; i++){
			horses[i].init(i, TRACK_LENGTH);
			horses[i].printLane();
			horses[i].advance();
			keepGoing = horses[i].isWinner();
		} // End for
		std::cout << "CURRENT STANDINGS " << std::endl;
		std::string choice;
		getline(std::cin, choice);
	} // End while
} // End runGame
