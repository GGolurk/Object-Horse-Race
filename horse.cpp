#include "horse.h"
#include <iostream>
#include <cstdlib>

Horse::Horse(){
	Horse::position = 0;
	Horse::trackLength = 15;
	Horse::id = 0;
} // End constructor

void Horse::init(int id, int trackLength, int position){
	Horse::position = position;
	Horse::trackLength = trackLength;
	Horse::id = id;
} // End init

void Horse::advance(){
	// I probably don't need to seed this multiple times, but I'm not sure where else to put this.
	srand(time(NULL));
	int random = rand();
	int movement = random % 2;
	Horse::position += movement;
} // End advance

void Horse::printLane(){
	for(int i = 0; i <  trackLength; i++){
		if(i != position){
			std::cout << ".";
		} else {
			std::cout << position;
		} // End if/else
	} // End for
	// Breaks the lines up.
	std::cout << std::endl;
} // End printLane

bool Horse::isWinner(){
	if(position > trackLength){
		return true;
	} // End if
} // End isWinner
